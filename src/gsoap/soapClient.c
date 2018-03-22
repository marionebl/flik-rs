/* soapClient.c
   Generated by gSOAP 2.8.63 for baseService.h

gSOAP XML Web services tools
Copyright (C) 2000-2018, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#if defined(__BORLANDC__)
#pragma option push -w-8060
#pragma option push -w-8004
#endif
#include "soapH.h"
#ifdef __cplusplus
extern "C" {
#endif

SOAP_SOURCE_STAMP("@(#) soapClient.c ver 2.8.63 2018-03-22 16:36:49 GMT")


SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__Login(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns3__LoginRequestParameter *ns3__LoginRequestParameter, struct _ns3__session *ns3__session)
{	struct __ns1__Login soap_tmp___ns1__Login;
	if (soap_endpoint == NULL)
		soap_endpoint = "https://blueant.sinnerschrader.com/blueant/services/BaseService/";
	if (soap_action == NULL)
		soap_action = "http://blueant.axis.proventis.net/Login";
	soap_tmp___ns1__Login.ns3__LoginRequestParameter = ns3__LoginRequestParameter;
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns1__Login(soap, &soap_tmp___ns1__Login);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__Login(soap, &soap_tmp___ns1__Login, "-ns1:Login", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__Login(soap, &soap_tmp___ns1__Login, "-ns1:Login", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns3__session)
		return soap_closesock(soap);
	soap_default__ns3__session(soap, ns3__session);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_get__ns3__session(soap, ns3__session, "ns3:session", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__LoginNoAuth(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns3__LoginNoAuthRequestParameter *ns3__LoginNoAuthRequestParameter, struct _ns3__session *ns3__session)
{	struct __ns1__LoginNoAuth soap_tmp___ns1__LoginNoAuth;
	if (soap_endpoint == NULL)
		soap_endpoint = "https://blueant.sinnerschrader.com/blueant/services/BaseService/";
	if (soap_action == NULL)
		soap_action = "http://blueant.axis.proventis.net/LoginNoAuth";
	soap_tmp___ns1__LoginNoAuth.ns3__LoginNoAuthRequestParameter = ns3__LoginNoAuthRequestParameter;
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns1__LoginNoAuth(soap, &soap_tmp___ns1__LoginNoAuth);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__LoginNoAuth(soap, &soap_tmp___ns1__LoginNoAuth, "-ns1:LoginNoAuth", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__LoginNoAuth(soap, &soap_tmp___ns1__LoginNoAuth, "-ns1:LoginNoAuth", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns3__session)
		return soap_closesock(soap);
	soap_default__ns3__session(soap, ns3__session);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_get__ns3__session(soap, ns3__session, "ns3:session", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__LoginSAML(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns3__LoginSAMLRequestParameter *ns3__LoginSAMLRequestParameter, struct _ns3__session *ns3__session)
{	struct __ns1__LoginSAML soap_tmp___ns1__LoginSAML;
	if (soap_endpoint == NULL)
		soap_endpoint = "https://blueant.sinnerschrader.com/blueant/services/BaseService/";
	if (soap_action == NULL)
		soap_action = "http://blueant.axis.proventis.net/LoginSAML";
	soap_tmp___ns1__LoginSAML.ns3__LoginSAMLRequestParameter = ns3__LoginSAMLRequestParameter;
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns1__LoginSAML(soap, &soap_tmp___ns1__LoginSAML);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__LoginSAML(soap, &soap_tmp___ns1__LoginSAML, "-ns1:LoginSAML", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__LoginSAML(soap, &soap_tmp___ns1__LoginSAML, "-ns1:LoginSAML", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns3__session)
		return soap_closesock(soap);
	soap_default__ns3__session(soap, ns3__session);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_get__ns3__session(soap, ns3__session, "ns3:session", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__LoginImpersonate(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns3__LoginImpersonateRequestParameter *ns3__LoginImpersonateRequestParameter, struct _ns3__session *ns3__session)
{	struct __ns1__LoginImpersonate soap_tmp___ns1__LoginImpersonate;
	if (soap_endpoint == NULL)
		soap_endpoint = "https://blueant.sinnerschrader.com/blueant/services/BaseService/";
	if (soap_action == NULL)
		soap_action = "http://blueant.axis.proventis.net/LoginImpersonate";
	soap_tmp___ns1__LoginImpersonate.ns3__LoginImpersonateRequestParameter = ns3__LoginImpersonateRequestParameter;
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns1__LoginImpersonate(soap, &soap_tmp___ns1__LoginImpersonate);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__LoginImpersonate(soap, &soap_tmp___ns1__LoginImpersonate, "-ns1:LoginImpersonate", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__LoginImpersonate(soap, &soap_tmp___ns1__LoginImpersonate, "-ns1:LoginImpersonate", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns3__session)
		return soap_closesock(soap);
	soap_default__ns3__session(soap, ns3__session);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_get__ns3__session(soap, ns3__session, "ns3:session", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__Logout(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns3__LogoutRequestParameter *ns3__LogoutRequestParameter, struct __ns1__LogoutResponse *_param_1)
{	struct __ns1__Logout soap_tmp___ns1__Logout;
	if (soap_endpoint == NULL)
		soap_endpoint = "https://blueant.sinnerschrader.com/blueant/services/BaseService/";
	if (soap_action == NULL)
		soap_action = "http://blueant.axis.proventis.net/Logout";
	soap_tmp___ns1__Logout.ns3__LogoutRequestParameter = ns3__LogoutRequestParameter;
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns1__Logout(soap, &soap_tmp___ns1__Logout);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__Logout(soap, &soap_tmp___ns1__Logout, "-ns1:Logout", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__Logout(soap, &soap_tmp___ns1__Logout, "-ns1:Logout", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!_param_1)
		return soap_closesock(soap);
	soap_default___ns1__LogoutResponse(soap, _param_1);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	if (soap_recv_fault(soap, 1))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__createUser(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns3__createUserRequestParameter *ns3__createUserRequestParameter, struct ns3__T_USCOREUser *ns3__User)
{	struct __ns1__createUser soap_tmp___ns1__createUser;
	if (soap_endpoint == NULL)
		soap_endpoint = "https://blueant.sinnerschrader.com/blueant/services/BaseService/";
	if (soap_action == NULL)
		soap_action = "http://blueant.axis.proventis.net/createUser";
	soap_tmp___ns1__createUser.ns3__createUserRequestParameter = ns3__createUserRequestParameter;
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns1__createUser(soap, &soap_tmp___ns1__createUser);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__createUser(soap, &soap_tmp___ns1__createUser, "-ns1:createUser", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__createUser(soap, &soap_tmp___ns1__createUser, "-ns1:createUser", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns3__User)
		return soap_closesock(soap);
	soap_default_ns3__T_USCOREUser(soap, ns3__User);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_get_ns3__T_USCOREUser(soap, ns3__User, "ns3:User", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__deleteUser(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns3__deleteUserRequestParameter *ns3__deleteUserRequestParameter, struct __ns1__deleteUserResponse *_param_1)
{	struct __ns1__deleteUser soap_tmp___ns1__deleteUser;
	if (soap_endpoint == NULL)
		soap_endpoint = "https://blueant.sinnerschrader.com/blueant/services/BaseService/";
	if (soap_action == NULL)
		soap_action = "http://blueant.axis.proventis.net/deleteUser";
	soap_tmp___ns1__deleteUser.ns3__deleteUserRequestParameter = ns3__deleteUserRequestParameter;
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns1__deleteUser(soap, &soap_tmp___ns1__deleteUser);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__deleteUser(soap, &soap_tmp___ns1__deleteUser, "-ns1:deleteUser", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__deleteUser(soap, &soap_tmp___ns1__deleteUser, "-ns1:deleteUser", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!_param_1)
		return soap_closesock(soap);
	soap_default___ns1__deleteUserResponse(soap, _param_1);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	if (soap_recv_fault(soap, 1))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__searchUser(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns3__searchUserRequestParameter *ns3__searchUserRequestParameter, struct _ns3__UserList *ns3__UserList)
{	struct __ns1__searchUser soap_tmp___ns1__searchUser;
	if (soap_endpoint == NULL)
		soap_endpoint = "https://blueant.sinnerschrader.com/blueant/services/BaseService/";
	if (soap_action == NULL)
		soap_action = "http://blueant.axis.proventis.net/searchUser";
	soap_tmp___ns1__searchUser.ns3__searchUserRequestParameter = ns3__searchUserRequestParameter;
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns1__searchUser(soap, &soap_tmp___ns1__searchUser);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__searchUser(soap, &soap_tmp___ns1__searchUser, "-ns1:searchUser", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__searchUser(soap, &soap_tmp___ns1__searchUser, "-ns1:searchUser", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns3__UserList)
		return soap_closesock(soap);
	soap_default__ns3__UserList(soap, ns3__UserList);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_get__ns3__UserList(soap, ns3__UserList, "ns3:UserList", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

#ifdef __cplusplus
}
#endif

#if defined(__BORLANDC__)
#pragma option pop
#pragma option pop
#endif

/* End of soapClient.c */
