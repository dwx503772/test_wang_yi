# 1 "c:\\users\\edwin\\desktop\\\265\332\301\371\314\354\277\316\263\314\\script\\createproject2\\\\combined_createproject2.c"
# 1 "D:\\Program Files\\HP\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "D:\\Program Files\\HP\\LoadRunner\\include/lrun.h"








































































	

 


















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 263 "D:\\Program Files\\HP\\LoadRunner\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 502 "D:\\Program Files\\HP\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 505 "D:\\Program Files\\HP\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 528 "D:\\Program Files\\HP\\LoadRunner\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 562 "D:\\Program Files\\HP\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 585 "D:\\Program Files\\HP\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 609 "D:\\Program Files\\HP\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);
int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);


 
 
 
 
 
 
# 676 "D:\\Program Files\\HP\\LoadRunner\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											int * col_name_len);
# 737 "D:\\Program Files\\HP\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);


 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   int const in_len,
                                   char * * const out_str,
                                   int * const out_len);
# 762 "D:\\Program Files\\HP\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 774 "D:\\Program Files\\HP\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 782 "D:\\Program Files\\HP\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 788 "D:\\Program Files\\HP\\LoadRunner\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );

int lr_save_searched_string(char *buffer, long buf_size, unsigned int occurrence,
			    char *search_string, int offset, unsigned int param_val_len, 
			    char *param_name);

 
char *   lr_string (char * str);

 
# 859 "D:\\Program Files\\HP\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 866 "D:\\Program Files\\HP\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 888 "D:\\Program Files\\HP\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 964 "D:\\Program Files\\HP\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 993 "D:\\Program Files\\HP\\LoadRunner\\include/lrun.h"


# 1005 "D:\\Program Files\\HP\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char *sourceString, char *fromEncoding, char *toEncoding, char *paramName);





 
 

















# 1 "c:\\users\\edwin\\desktop\\\265\332\301\371\314\354\277\316\263\314\\script\\createproject2\\\\combined_createproject2.c" 2

# 1 "globals.h" 1



 
 

# 1 "D:\\Program Files\\HP\\LoadRunner\\include/web_api.h" 1
 







# 1 "D:\\Program Files\\HP\\LoadRunner\\include/as_web.h" 1
 






















































 




 








 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 










# 612 "D:\\Program Files\\HP\\LoadRunner\\include/as_web.h"


# 625 "D:\\Program Files\\HP\\LoadRunner\\include/as_web.h"



























# 663 "D:\\Program Files\\HP\\LoadRunner\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 731 "D:\\Program Files\\HP\\LoadRunner\\include/as_web.h"



 
 
 






# 10 "D:\\Program Files\\HP\\LoadRunner\\include/web_api.h" 2












 






 











  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 





 
 
 


# 7 "globals.h" 2

# 1 "D:\\Program Files\\HP\\LoadRunner\\include/lrw_custom_body.h" 1
 





# 8 "globals.h" 2


 
 


# 2 "c:\\users\\edwin\\desktop\\\265\332\301\371\314\354\277\316\263\314\\script\\createproject2\\\\combined_createproject2.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 3 "c:\\users\\edwin\\desktop\\\265\332\301\371\314\354\277\316\263\314\\script\\createproject2\\\\combined_createproject2.c" 2

# 1 "Action.c" 1
Action()
{

 

	lr_save_string("192.168.0.106","ip");
	web_reg_save_param_ex(
		"ParamName=CorrelationParameter_1",
		"LB= value=\"",
		"RB=\"/>",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/login.php*",
		"LAST");

	web_url("login.php",
		"URL=http://{ip}/testlink/login.php",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=",
		"Snapshot=t1.inf",
		"Mode=HTTP",
		"LAST");

	web_url("testlink.css",
		"URL=http://{ip}/testlink/gui/themes/default/css/testlink.css",
		"Resource=1",
		"RecContentType=text/css",
		"Referer=http://{ip}/testlink/login.php",
		"Snapshot=t2.inf",
		"LAST");

	web_url("tl_print.css",
		"URL=http://{ip}/testlink/gui/themes/default/css/tl_print.css",
		"Resource=1",
		"RecContentType=text/css",
		"Referer=http://{ip}/testlink/login.php",
		"Snapshot=t3.inf",
		"LAST");

	web_url("testlink_library.js",
		"URL=http://{ip}/testlink/gui/javascript/testlink_library.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer=http://{ip}/testlink/login.php",
		"Snapshot=t4.inf",
		"LAST");

	web_url("prototype.js",
		"URL=http://{ip}/testlink/third_party/prototype/prototype.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer=http://{ip}/testlink/login.php",
		"Snapshot=t5.inf",
		"LAST");

	web_url("niftycube.js",
		"URL=http://{ip}/testlink/gui/niftycube/niftycube.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer=http://{ip}/testlink/login.php",
		"Snapshot=t6.inf",
		"LAST");

	web_url("company_logo.png",
		"URL=http://{ip}/testlink/gui/themes/default/images/company_logo.png",
		"Resource=1",
		"RecContentType=image/png",
		"Referer=http://{ip}/testlink/login.php",
		"Snapshot=t7.inf",
		"LAST");

	web_url("sorttable.js",
		"URL=http://{ip}/testlink/gui/javascript/sorttable.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer=http://{ip}/testlink/login.php",
		"Snapshot=t8.inf",
		"LAST");

	web_url("test_automation.js",
		"URL=http://{ip}/testlink/gui/javascript/test_automation.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer=http://{ip}/testlink/login.php",
		"Snapshot=t9.inf",
		"LAST");

	web_url("navbar.gif",
		"URL=http://{ip}/testlink/gui/themes/default/images/navbar.gif",
		"Resource=1",
		"RecContentType=image/gif",
		"Referer=http://{ip}/testlink/login.php",
		"Snapshot=t10.inf",
		"LAST");

	web_url("favicon.ico",
		"URL=http://{ip}/testlink/gui/themes/default/images/favicon.ico",
		"Resource=1",
		"RecContentType=image/vnd.microsoft.icon",
		"Referer=",
		"Snapshot=t11.inf",
		"LAST");

	web_url("niftyCorners.css",
		"URL=http://{ip}/testlink/gui/niftycube/niftyCorners.css",
		"Resource=1",
		"RecContentType=text/css",
		"Referer=http://{ip}/testlink/login.php",
		"Snapshot=t12.inf",
		"LAST");

	lr_think_time(2);
	
	lr_start_transaction("login");
	web_submit_data("login.php_2",
		"Action=http://{ip}/testlink/login.php",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=http://{ip}/testlink/login.php",
		"Snapshot=t13.inf",
		"Mode=HTTP",
		"ITEMDATA",
		"Name=csrf_protection_token", "Value={CorrelationParameter_1}", "ENDITEM",
		"Name=reqURI", "Value=", "ENDITEM",
		"Name=destination", "Value=", "ENDITEM",
		"Name=tl_login", "Value={login}", "ENDITEM",
		"Name=tl_password", "Value={password}", "ENDITEM",
		"Name=login_submit", "Value=Login", "ENDITEM",
		"LAST");

	web_url("index.php",
		"URL=http://{ip}/testlink/index.php",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://{ip}/testlink/login.php",
		"Snapshot=t14.inf",
		"Mode=HTTP",
		"LAST");

	web_url("navBar.php",
		"URL=http://{ip}/testlink/lib/general/navBar.php",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://{ip}/testlink/index.php",
		"Snapshot=t15.inf",
		"Mode=HTTP",
		"LAST");

	web_url("magnifier.png",
		"URL=http://{ip}/testlink/gui/themes/default/images//magnifier.png",
		"Resource=1",
		"RecContentType=image/png",
		"Referer=http://{ip}/testlink/lib/general/navBar.php",
		"Snapshot=t16.inf",
		"LAST");

	web_url("mainPage.php",
		"URL=http://{ip}/testlink/lib/general/mainPage.php",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://{ip}/testlink/index.php",
		"Snapshot=t17.inf",
		"Mode=HTTP",
		"LAST");

	web_url("ext-all.css",
		"URL=http://{ip}/testlink/third_party/ext-js/css/ext-all.css",
		"Resource=1",
		"RecContentType=text/css",
		"Referer=http://{ip}/testlink/lib/general/mainPage.php",
		"Snapshot=t18.inf",
		"LAST");

	web_url("Exporter-all.js",
		"URL=http://{ip}/testlink/third_party/ext-js/ux/Exporter-all.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer=http://{ip}/testlink/lib/general/mainPage.php",
		"Snapshot=t19.inf",
		"LAST");

	web_url("ListMenu.js",
		"URL=http://{ip}/testlink/third_party/ext-js/ux/gridfilters/menu/ListMenu.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer=http://{ip}/testlink/lib/general/mainPage.php",
		"Snapshot=t20.inf",
		"LAST");

	web_url("GridFilters.js",
		"URL=http://{ip}/testlink/third_party/ext-js/ux/gridfilters/GridFilters.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer=http://{ip}/testlink/lib/general/mainPage.php",
		"Snapshot=t21.inf",
		"LAST");

	web_url("Filter.js",
		"URL=http://{ip}/testlink/third_party/ext-js/ux/gridfilters/filter/Filter.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer=http://{ip}/testlink/lib/general/mainPage.php",
		"Snapshot=t22.inf",
		"LAST");

	web_url("StringFilter.js",
		"URL=http://{ip}/testlink/third_party/ext-js/ux/gridfilters/filter/StringFilter.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer=http://{ip}/testlink/lib/general/mainPage.php",
		"Snapshot=t23.inf",
		"LAST");

	web_url("ListFilter.js",
		"URL=http://{ip}/testlink/third_party/ext-js/ux/gridfilters/filter/ListFilter.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer=http://{ip}/testlink/lib/general/mainPage.php",
		"Snapshot=t24.inf",
		"LAST");

	web_url("NumericFilter.js",
		"URL=http://{ip}/testlink/third_party/ext-js/ux/gridfilters/filter/NumericFilter.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer=http://{ip}/testlink/lib/general/mainPage.php",
		"Snapshot=t25.inf",
		"LAST");

	web_url("GridFilters.css",
		"URL=http://{ip}/testlink/third_party/ext-js/ux/gridfilters/css/GridFilters.css",
		"Resource=1",
		"RecContentType=text/css",
		"Referer=http://{ip}/testlink/lib/general/mainPage.php",
		"Snapshot=t26.inf",
		"LAST");

	web_url("BooleanFilter.js",
		"URL=http://{ip}/testlink/third_party/ext-js/ux/gridfilters/filter/BooleanFilter.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer=http://{ip}/testlink/lib/general/mainPage.php",
		"Snapshot=t27.inf",
		"LAST");

	web_url("ext-lang-zh_CN.js",
		"URL=http://{ip}/testlink/third_party/ext-js/src/locale/ext-lang-zh_CN.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer=http://{ip}/testlink/lib/general/mainPage.php",
		"Snapshot=t28.inf",
		"LAST");

	web_url("DateFilter.js",
		"URL=http://{ip}/testlink/third_party/ext-js/ux/gridfilters/filter/DateFilter.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer=http://{ip}/testlink/lib/general/mainPage.php",
		"Snapshot=t29.inf",
		"LAST");

	web_url("slide_gripper.gif",
		"URL=http://{ip}/testlink/gui/themes/default/images/slide_gripper.gif",
		"Resource=1",
		"RecContentType=image/gif",
		"Referer=http://{ip}/testlink/lib/general/mainPage.php",
		"Snapshot=t30.inf",
		"LAST");

	web_url("TableGrid.js",
		"URL=http://{ip}/testlink/third_party/ext-js/ux/TableGrid.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer=http://{ip}/testlink/lib/general/mainPage.php",
		"Snapshot=t31.inf",
		"LAST");

	web_url("Reorderer.js",
		"URL=http://{ip}/testlink/third_party/ext-js/ux/Reorderer.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer=http://{ip}/testlink/lib/general/mainPage.php",
		"Snapshot=t32.inf",
		"LAST");

	web_url("RangeMenu.css",
		"URL=http://{ip}/testlink/third_party/ext-js/ux/gridfilters/css/RangeMenu.css",
		"Resource=1",
		"RecContentType=text/css",
		"Referer=http://{ip}/testlink/lib/general/mainPage.php",
		"Snapshot=t33.inf",
		"LAST");

	web_url("ext-all.js",
		"URL=http://{ip}/testlink/third_party/ext-js/ext-all.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer=http://{ip}/testlink/lib/general/mainPage.php",
		"Snapshot=t34.inf",
		"LAST");

	web_url("ext-base.js",
		"URL=http://{ip}/testlink/third_party/ext-js/adapter/ext/ext-base.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer=http://{ip}/testlink/lib/general/mainPage.php",
		"Snapshot=t35.inf",
		"LAST");

	web_url("ToolbarReorderer.js",
		"URL=http://{ip}/testlink/third_party/ext-js/ux/ToolbarReorderer.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer=http://{ip}/testlink/lib/general/mainPage.php",
		"Snapshot=t36.inf",
		"LAST");

	web_url("ToolbarDroppable.js",
		"URL=http://{ip}/testlink/third_party/ext-js/ux/ToolbarDroppable.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer=http://{ip}/testlink/lib/general/mainPage.php",
		"Snapshot=t37.inf",
		"LAST");

	web_url("RangeMenu.js",
		"URL=http://{ip}/testlink/third_party/ext-js/ux/gridfilters/menu/RangeMenu.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer=http://{ip}/testlink/lib/general/mainPage.php",
		"Snapshot=t38.inf",
		"LAST");

	web_url("white-top-bottom.gif",
		"URL=http://{ip}/testlink/gui/themes/default/images/white-top-bottom.gif",
		"Resource=1",
		"RecContentType=image/gif",
		"Referer=http://{ip}/testlink/lib/general/mainPage.php",
		"Snapshot=t39.inf",
		"LAST");

	lr_end_transaction("login", 2);

	lr_think_time(6);

	web_url("测试项目管理",
		"URL=http://{ip}/testlink/lib/project/projectView.php",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://{ip}/testlink/lib/general/mainPage.php",
		"Snapshot=t40.inf",
		"Mode=HTTP",
		"LAST");

	web_url("brick.png",
		"URL=http://{ip}/testlink/gui/themes/default/images/brick.png",
		"Resource=1",
		"RecContentType=image/png",
		"Referer=http://{ip}/testlink/lib/project/projectView.php",
		"Snapshot=t41.inf",
		"LAST");

	web_url("sort_hint.png",
		"URL=http://{ip}/testlink/gui/themes/default/images/sort_hint.png",
		"Resource=1",
		"RecContentType=image/png",
		"Referer=http://{ip}/testlink/lib/project/projectView.php",
		"Snapshot=t42.inf",
		"LAST");

	web_url("apply_f2_16.png",
		"URL=http://{ip}/testlink/gui/themes/default/images/apply_f2_16.png",
		"Resource=1",
		"RecContentType=image/png",
		"Referer=http://{ip}/testlink/lib/project/projectView.php",
		"Snapshot=t43.inf",
		"LAST");

	web_url("trash.png",
		"URL=http://{ip}/testlink/gui/themes/default/images/trash.png",
		"Resource=1",
		"RecContentType=image/png",
		"Referer=http://{ip}/testlink/lib/project/projectView.php",
		"Snapshot=t44.inf",
		"LAST");

 
	
	lr_start_transaction("createproject");

	web_reg_save_param_ex(
		"ParamName=CorrelationParameter_2",
		"LB= value=\"",
		"RB=\"/>",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/projectEdit.php*",
		"LAST");

	web_submit_data("projectEdit.php",
		"Action=http://{ip}/testlink/lib/project/projectEdit.php?doAction=create",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=http://{ip}/testlink/lib/project/projectView.php",
		"Snapshot=t45.inf",
		"Mode=HTTP",
		"ITEMDATA",
		"Name=create", "Value=创建", "ENDITEM",
		"LAST");

	web_url("validate.js",
		"URL=http://{ip}/testlink/gui/javascript/validate.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer=http://{ip}/testlink/lib/project/projectEdit.php?doAction=create",
		"Snapshot=t46.inf",
		"LAST");

	web_url("cfield_validation.js",
		"URL=http://{ip}/testlink/gui/javascript/cfield_validation.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer=http://{ip}/testlink/lib/project/projectEdit.php?doAction=create",
		"Snapshot=t47.inf",
		"LAST");

	web_url("error.gif",
		"URL=http://{ip}/testlink/gui/themes/default/images//error.gif",
		"Resource=1",
		"RecContentType=image/gif",
		"Referer=http://{ip}/testlink/lib/project/projectEdit.php?doAction=create",
		"Snapshot=t48.inf",
		"LAST");

	web_url("fckeditor.html",
		"URL=http://{ip}/testlink/third_party/fckeditor/editor/fckeditor.html?InstanceName=notes&Toolbar=tl_default",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://{ip}/testlink/lib/project/projectEdit.php?doAction=create",
		"Snapshot=t49.inf",
		"Mode=HTTP",
		"LAST");

	web_url("spacer.gif",
		"URL=http://{ip}/testlink/third_party/fckeditor/editor/images/spacer.gif",
		"Resource=1",
		"RecContentType=image/gif",
		"Referer=http://{ip}/testlink/third_party/fckeditor/editor/fckeditor.html?InstanceName=notes&Toolbar=tl_default",
		"Snapshot=t50.inf",
		"LAST");

	web_url("fckconfig.js",
		"URL=http://{ip}/testlink/third_party/fckeditor/fckconfig.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer=http://{ip}/testlink/third_party/fckeditor/editor/fckeditor.html?InstanceName=notes&Toolbar=tl_default",
		"Snapshot=t51.inf",
		"LAST");

	web_url("fckeditorcode_ie.js",
		"URL=http://{ip}/testlink/third_party/fckeditor/editor/js/fckeditorcode_ie.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer=http://{ip}/testlink/third_party/fckeditor/editor/fckeditor.html?InstanceName=notes&Toolbar=tl_default",
		"Snapshot=t52.inf",
		"LAST");

	web_url("tl_fckeditor_config.js",
		"URL=http://{ip}/testlink/cfg/tl_fckeditor_config.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer=http://{ip}/testlink/third_party/fckeditor/editor/fckeditor.html?InstanceName=notes&Toolbar=tl_default",
		"Snapshot=t53.inf",
		"LAST");

	web_url("fck_editor.css",
		"URL=http://{ip}/testlink/third_party/fckeditor/editor/skins/default/fck_editor.css",
		"Resource=1",
		"RecContentType=text/css",
		"Referer=http://{ip}/testlink/third_party/fckeditor/editor/fckeditor.html?InstanceName=notes&Toolbar=tl_default",
		"Snapshot=t54.inf",
		"LAST");

	web_url("zh-cn.js",
		"URL=http://{ip}/testlink/third_party/fckeditor/editor/lang/zh-cn.js",
		"Resource=1",
		"RecContentType=application/javascript",
		"Referer=http://{ip}/testlink/third_party/fckeditor/editor/fckeditor.html?InstanceName=notes&Toolbar=tl_default",
		"Snapshot=t55.inf",
		"LAST");

	web_url("toolbar.expand.gif",
		"URL=http://{ip}/testlink/third_party/fckeditor/editor/skins/default/images/toolbar.expand.gif",
		"Resource=1",
		"RecContentType=image/gif",
		"Referer=http://{ip}/testlink/third_party/fckeditor/editor/fckeditor.html?InstanceName=notes&Toolbar=tl_default",
		"Snapshot=t56.inf",
		"LAST");

	web_url("toolbar.collapse.gif",
		"URL=http://{ip}/testlink/third_party/fckeditor/editor/skins/default/images/toolbar.collapse.gif",
		"Resource=1",
		"RecContentType=image/gif",
		"Referer=http://{ip}/testlink/third_party/fckeditor/editor/fckeditor.html?InstanceName=notes&Toolbar=tl_default",
		"Snapshot=t57.inf",
		"LAST");

	web_url("toolbar.start.gif",
		"URL=http://{ip}/testlink/third_party/fckeditor/editor/skins/default/images/toolbar.start.gif",
		"Resource=1",
		"RecContentType=image/gif",
		"Referer=http://{ip}/testlink/third_party/fckeditor/editor/fckeditor.html?InstanceName=notes&Toolbar=tl_default",
		"Snapshot=t58.inf",
		"LAST");

	web_url("fck_strip.gif",
		"URL=http://{ip}/testlink/third_party/fckeditor/editor/skins/default/fck_strip.gif",
		"Resource=1",
		"RecContentType=image/gif",
		"Referer=http://{ip}/testlink/third_party/fckeditor/editor/fckeditor.html?InstanceName=notes&Toolbar=tl_default",
		"Snapshot=t59.inf",
		"LAST");

	web_url("toolbar.buttonarrow.gif",
		"URL=http://{ip}/testlink/third_party/fckeditor/editor/skins/default/images/toolbar.buttonarrow.gif",
		"Resource=1",
		"RecContentType=image/gif",
		"Referer=http://{ip}/testlink/third_party/fckeditor/editor/fckeditor.html?InstanceName=notes&Toolbar=tl_default",
		"Snapshot=t60.inf",
		"LAST");

	web_url("fck_editorarea.css",
		"URL=http://{ip}/testlink/third_party/fckeditor/editor/css/fck_editorarea.css",
		"Resource=1",
		"RecContentType=text/css",
		"Referer=",
		"Snapshot=t61.inf",
		"LAST");

	web_url("fckstyles.xml",
		"URL=http://{ip}/testlink/third_party/fckeditor/fckstyles.xml",
		"Resource=1",
		"RecContentType=application/xml",
		"Referer=http://{ip}/testlink/third_party/fckeditor/editor/fckeditor.html?InstanceName=notes&Toolbar=tl_default",
		"Snapshot=t62.inf",
		"LAST");

	lr_think_time(3);



	web_submit_data("projectEdit.php_2",
		"Action=http://{ip}/testlink/lib/project/projectEdit.php",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=http://{ip}/testlink/lib/project/projectEdit.php?doAction=create",
		"Snapshot=t63.inf",
		"Mode=HTTP",
		"ITEMDATA",
		"Name=csrf_protection_token", "Value={CorrelationParameter_2}", "ENDITEM",
		"Name=copy_from_tproject_id", "Value=0", "ENDITEM",
		"Name=tprojectName", "Value={project}", "ENDITEM",
		"Name=tcasePrefix", "Value={caseprefix}", "ENDITEM",
		"Name=notes", "Value=", "ENDITEM",
		"Name=issue_tracker_id", "Value=0", "ENDITEM",
		"Name=active", "Value=on", "ENDITEM",
		"Name=is_public", "Value=on", "ENDITEM",
		"Name=doAction", "Value=doCreate", "ENDITEM",
		"Name=tprojectID", "Value=0", "ENDITEM",
		"Name=doActionButton", "Value=创建", "ENDITEM",
		"LAST");
	 
	web_reg_find("Text={project}",
				 "SaveCount=projectCheck",
		"LAST");
	web_url("navBar.php_2",
		"URL=http://{ip}/testlink/lib/general/navBar.php",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://{ip}/testlink/lib/project/projectEdit.php",
		"Snapshot=t64.inf",
		"Mode=HTTP",
		"LAST");
	if(atoi(lr_eval_string("{projectCheck}"))>0){
		lr_end_transaction("createproject", 0);
	}else{
        lr_end_transaction("createproject", 1);
	}
return 0;
}
# 4 "c:\\users\\edwin\\desktop\\\265\332\301\371\314\354\277\316\263\314\\script\\createproject2\\\\combined_createproject2.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 5 "c:\\users\\edwin\\desktop\\\265\332\301\371\314\354\277\316\263\314\\script\\createproject2\\\\combined_createproject2.c" 2

