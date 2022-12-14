Action()
{



web_set_max_html_param_len("999");



//"access_token":"

//web_reg_save_param("Token_id","LB=\"access_token\":\"","RB=\",",LAST);



web_set_sockets_option("SSL_VERSION","TLS1.2");



web_custom_request("web_custom_request",

"URL=https://api.agify.io/?name=bella",

"Method=GET",

"TargetFrame=",

"Resource=0",

"Referer=",

"EncType=application/json",

"Body=",

LAST);


return 0;
}