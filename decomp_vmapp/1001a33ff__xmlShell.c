
void _xmlShell(xmlDocPtr doc,char *filename,xmlShellReadlineFunc input,FILE *output)

{
  uint uVar1;
  xmlGenericErrorFunc pxVar2;
  int iVar3;
  xmlChar *pxVar4;
  xmlXPathContextPtr pxVar5;
  xmlGenericErrorFunc *ppxVar6;
  void **ppvVar7;
  FILE *local_678;
  char local_658 [508];
  int local_45c;
  xmlChar local_458 [400];
  xmlChar local_2c8 [112];
  char local_258 [4];
  char local_254;
  undefined1 local_253 [494];
  undefined1 local_65;
  xmlChar *local_58;
  xmlChar *local_50;
  int local_48;
  int local_44;
  xmlShellCtxtPtr local_40;
  xmlXPathObjectPtr local_38;
  xmlNodePtr local_30;
  uint local_24;
  int local_20;
  int local_1c;
  
  local_258 = (char  [4])s___>_100a035a5._0_4_;
  local_254 = s___>_100a035a5[4];
  _memset(local_253,0,0x1ef);
  local_58 = (xmlChar *)0x0;
  if (((doc != (xmlDocPtr)0x0) && (filename != (char *)0x0)) && (input != (xmlShellReadlineFunc)0x0)
     ) {
    local_678 = output;
    if (output == (FILE *)0x0) {
      local_678 = *(FILE **)PTR____stdoutp_100ba2338;
    }
    local_40 = (xmlShellCtxtPtr)(*(code *)_xmlMalloc)(0x38);
    if (local_40 != (xmlShellCtxtPtr)0x0) {
      local_40->loaded = 0;
      local_40->doc = doc;
      local_40->input = input;
      local_40->output = local_678;
      pxVar4 = _xmlStrdup((xmlChar *)filename);
      local_40->filename = (char *)pxVar4;
      local_40->node = (xmlNodePtr)local_40->doc;
      pxVar5 = _xmlXPathNewContext(local_40->doc);
      local_40->pctxt = pxVar5;
      if (local_40->pctxt == (xmlXPathContextPtr)0x0) {
        (*(code *)_xmlFree)(local_40);
      }
      else {
        while( true ) {
          if ((xmlDocPtr)local_40->node == local_40->doc) {
            _snprintf(local_258,500,"%s > ","/");
          }
          else if ((local_40->node == (xmlNodePtr)0x0) || (local_40->node->name == (xmlChar *)0x0))
          {
            _snprintf(local_258,500,"? > ");
          }
          else {
            _snprintf(local_258,500,"%s > ",local_40->node->name);
          }
          local_65 = 0;
          local_58 = (xmlChar *)(*local_40->input)(local_258);
          if (local_58 == (xmlChar *)0x0) break;
          local_48 = 0;
          for (local_50 = local_58; (*local_50 == ' ' || (*local_50 == '\t'));
              local_50 = local_50 + 1) {
          }
          local_44 = 0;
          for (; (((*local_50 != ' ' && (*local_50 != '\t')) && (*local_50 != '\n')) &&
                 ((*local_50 != '\r' && (*local_50 != '\0')))); local_50 = local_50 + 1) {
            local_2c8[local_44] = *local_50;
            local_44 = local_44 + 1;
          }
          local_2c8[local_44] = '\0';
          if (local_44 != 0) {
            local_48 = local_48 + 1;
            for (; (*local_50 == ' ' || (*local_50 == '\t')); local_50 = local_50 + 1) {
            }
            local_44 = 0;
            for (; (((*local_50 != '\n' && (*local_50 != '\r')) && (*local_50 != '\0')) &&
                   (*local_50 != '\0')); local_50 = local_50 + 1) {
              local_458[local_44] = *local_50;
              local_44 = local_44 + 1;
            }
            local_458[local_44] = '\0';
            if (local_44 != 0) {
              local_48 = local_48 + 1;
            }
            iVar3 = _strcmp((char *)local_2c8,"exit");
            if (((iVar3 == 0) || (iVar3 = _strcmp((char *)local_2c8,"quit"), iVar3 == 0)) ||
               (iVar3 = _strcmp((char *)local_2c8,"bye"), iVar3 == 0)) break;
            iVar3 = _strcmp((char *)local_2c8,"help");
            if (iVar3 == 0) {
              _fwrite("\tbase         display XML base of the node\n",1,0x2b,local_40->output);
              _fwrite("\tsetbase URI  change the XML base of the node\n",1,0x2e,local_40->output);
              _fwrite("\tbye          leave shell\n",1,0x1a,local_40->output);
              _fwrite("\tcat [node]   display node or current node\n",1,0x2b,local_40->output);
              _fwrite("\tcd [path]    change directory to path or to root\n",1,0x32,local_40->output
                     );
              _fwrite("\tdir [path]   dumps informations about the node (namespace, attributes, content)\n"
                      ,1,0x51,local_40->output);
              _fwrite("\tdu [path]    show the structure of the subtree under path or the current node\n"
                      ,1,0x4f,local_40->output);
              _fwrite("\texit         leave shell\n",1,0x1a,local_40->output);
              _fwrite("\thelp         display this help\n",1,0x20,local_40->output);
              _fwrite("\tfree         display memory usage\n",1,0x23,local_40->output);
              _fwrite("\tload [name]  load a new document with name\n",1,0x2c,local_40->output);
              _fwrite("\tls [path]    list contents of path or the current directory\n",1,0x3d,
                      local_40->output);
              _fwrite("\tset xml_fragment replace the current node content with the fragment parsed in context\n"
                      ,1,0x57,local_40->output);
              _fwrite("\txpath expr   evaluate the XPath expression in that context and print the result\n"
                      ,1,0x51,local_40->output);
              _fwrite("\tsetns nsreg  register a namespace to a prefix in the XPath evaluation context\n"
                      ,1,0x4f,local_40->output);
              _fwrite("\t             format for nsreg is: prefix=[nsuri] (i.e. prefix= unsets a prefix)\n"
                      ,1,0x51,local_40->output);
              _fwrite("\tsetrootns    register all namespace found on the root element\n",1,0x3f,
                      local_40->output);
              _fwrite("\t             the default namespace if any uses \'defaultns\' prefix\n",1,
                      0x43,local_40->output);
              _fwrite("\tpwd          display current working directory\n",1,0x30,local_40->output);
              _fwrite("\tquit         leave shell\n",1,0x1a,local_40->output);
              _fwrite("\tsave [name]  save this document to name or the original name\n",1,0x3e,
                      local_40->output);
              _fwrite("\twrite [name] write the current node to the filename\n",1,0x35,
                      local_40->output);
              _fwrite("\tvalidate     check the document for errors\n",1,0x2c,local_40->output);
              _fwrite("\trelaxng rng  validate the document agaisnt the Relax-NG schemas\n",1,0x41,
                      local_40->output);
              _fwrite("\tgrep string  search for a string in the subtree\n",1,0x31,local_40->output)
              ;
            }
            else {
              iVar3 = _strcmp((char *)local_2c8,"validate");
              if (iVar3 == 0) {
                _xmlShellValidate(local_40,(char *)local_458,(xmlNodePtr)0x0,(xmlNodePtr)0x0);
              }
              else {
                iVar3 = _strcmp((char *)local_2c8,"load");
                if (iVar3 == 0) {
                  _xmlShellLoad(local_40,(char *)local_458,(xmlNodePtr)0x0,(xmlNodePtr)0x0);
                }
                else {
                  iVar3 = _strcmp((char *)local_2c8,"relaxng");
                  if (iVar3 == 0) {
                    FUN_1001a2a05(local_40,local_458,0,0);
                  }
                  else {
                    iVar3 = _strcmp((char *)local_2c8,"save");
                    if (iVar3 == 0) {
                      _xmlShellSave(local_40,(char *)local_458,(xmlNodePtr)0x0,(xmlNodePtr)0x0);
                    }
                    else {
                      iVar3 = _strcmp((char *)local_2c8,"write");
                      if (iVar3 == 0) {
                        if (local_458[0] == '\0') {
                          ppxVar6 = ___xmlGenericError();
                          pxVar2 = *ppxVar6;
                          ppvVar7 = ___xmlGenericErrorContext();
                          (*pxVar2)(*ppvVar7,"Write command requires a filename argument\n");
                        }
                        else {
                          _xmlShellWrite(local_40,(char *)local_458,(xmlNodePtr)0x0,(xmlNodePtr)0x0)
                          ;
                        }
                      }
                      else {
                        iVar3 = _strcmp((char *)local_2c8,"grep");
                        if (iVar3 == 0) {
                          FUN_1001a25b2(local_40,local_458,local_40->node,0);
                        }
                        else {
                          iVar3 = _strcmp((char *)local_2c8,"free");
                          if (iVar3 == 0) {
                            if (local_458[0] == '\0') {
                              _xmlMemShow(local_40->output,0);
                            }
                            else {
                              local_45c = 0;
                              _sscanf((char *)local_458,"%d",&local_45c);
                              _xmlMemShow(local_40->output,local_45c);
                            }
                          }
                          else {
                            iVar3 = _strcmp((char *)local_2c8,"pwd");
                            if (iVar3 == 0) {
                              iVar3 = _xmlShellPwd(local_40,local_658,local_40->node,(xmlNodePtr)0x0
                                                  );
                              if (iVar3 == 0) {
                                _fprintf(local_40->output,"%s\n",local_658);
                              }
                            }
                            else {
                              iVar3 = _strcmp((char *)local_2c8,"du");
                              if (iVar3 == 0) {
                                _xmlShellDu(local_40,(char *)0x0,local_40->node,(xmlNodePtr)0x0);
                              }
                              else {
                                iVar3 = _strcmp((char *)local_2c8,"base");
                                if (iVar3 == 0) {
                                  _xmlShellBase(local_40,(char *)0x0,local_40->node,(xmlNodePtr)0x0)
                                  ;
                                }
                                else {
                                  iVar3 = _strcmp((char *)local_2c8,"set");
                                  if (iVar3 == 0) {
                                    FUN_1001a28c5(local_40,local_458,local_40->node,0);
                                  }
                                  else {
                                    iVar3 = _strcmp((char *)local_2c8,"setns");
                                    if (iVar3 == 0) {
                                      if (local_458[0] == '\0') {
                                        ppxVar6 = ___xmlGenericError();
                                        pxVar2 = *ppxVar6;
                                        ppvVar7 = ___xmlGenericErrorContext();
                                        (*pxVar2)(*ppvVar7,"setns: prefix=[nsuri] required\n");
                                      }
                                      else {
                                        FUN_1001a2396(local_40,local_458,0,0);
                                      }
                                    }
                                    else {
                                      iVar3 = _strcmp((char *)local_2c8,"setrootns");
                                      if (iVar3 == 0) {
                                        local_30 = _xmlDocGetRootElement(local_40->doc);
                                        FUN_1001a24e9(local_40,0,local_30,0);
                                      }
                                      else {
                                        iVar3 = _strcmp((char *)local_2c8,"xpath");
                                        if (iVar3 == 0) {
                                          if (local_458[0] == '\0') {
                                            ppxVar6 = ___xmlGenericError();
                                            pxVar2 = *ppxVar6;
                                            ppvVar7 = ___xmlGenericErrorContext();
                                            (*pxVar2)(*ppvVar7,"xpath: expression required\n");
                                          }
                                          else {
                                            local_40->pctxt->node = local_40->node;
                                            local_38 = _xmlXPathEval(local_458,local_40->pctxt);
                                            _xmlXPathDebugDumpObject(local_40->output,local_38,0);
                                            _xmlXPathFreeObject(local_38);
                                          }
                                        }
                                        else {
                                          iVar3 = _strcmp((char *)local_2c8,"setbase");
                                          if (iVar3 == 0) {
                                            FUN_1001a236a(local_40,local_458,local_40->node,0);
                                          }
                                          else {
                                            iVar3 = _strcmp((char *)local_2c8,"ls");
                                            if ((iVar3 == 0) ||
                                               (iVar3 = _strcmp((char *)local_2c8,"dir"), iVar3 == 0
                                               )) {
                                              iVar3 = _strcmp((char *)local_2c8,"dir");
                                              local_24 = (uint)(iVar3 == 0);
                                              if (local_458[0] == '\0') {
                                                if (local_24 == 0) {
                                                  _xmlShellList(local_40,(char *)0x0,local_40->node,
                                                                (xmlNodePtr)0x0);
                                                }
                                                else {
                                                  _xmlShellDir(local_40,(char *)0x0,local_40->node,
                                                               (xmlNodePtr)0x0);
                                                }
                                              }
                                              else {
                                                local_40->pctxt->node = local_40->node;
                                                local_40->pctxt->node = local_40->node;
                                                local_38 = _xmlXPathEval(local_458,local_40->pctxt);
                                                if (local_38 == (xmlXPathObjectPtr)0x0) {
                                                  ppxVar6 = ___xmlGenericError();
                                                  pxVar2 = *ppxVar6;
                                                  ppvVar7 = ___xmlGenericErrorContext();
                                                  (*pxVar2)(*ppvVar7,"%s: no such node\n",local_458)
                                                  ;
                                                }
                                                else {
                                                  switch(local_38->type) {
                                                  case XPATH_UNDEFINED:
                                                    ppxVar6 = ___xmlGenericError();
                                                    pxVar2 = *ppxVar6;
                                                    ppvVar7 = ___xmlGenericErrorContext();
                                                    (*pxVar2)(*ppvVar7,"%s: no such node\n",
                                                              local_458);
                                                    break;
                                                  case XPATH_NODESET:
                                                    if (local_38->nodesetval != (xmlNodeSetPtr)0x0)
                                                    {
                                                      for (local_20 = 0;
                                                          local_20 < local_38->nodesetval->nodeNr;
                                                          local_20 = local_20 + 1) {
                                                        if (local_24 == 0) {
                                                          _xmlShellList(local_40,(char *)0x0,
                                                                        local_38->nodesetval->
                                                                        nodeTab[local_20],
                                                                        (xmlNodePtr)0x0);
                                                        }
                                                        else {
                                                          _xmlShellDir(local_40,(char *)0x0,
                                                                       local_38->nodesetval->nodeTab
                                                                       [local_20],(xmlNodePtr)0x0);
                                                        }
                                                      }
                                                    }
                                                    break;
                                                  case XPATH_BOOLEAN:
                                                    ppxVar6 = ___xmlGenericError();
                                                    pxVar2 = *ppxVar6;
                                                    ppvVar7 = ___xmlGenericErrorContext();
                                                    (*pxVar2)(*ppvVar7,"%s is a Boolean\n",local_458
                                                             );
                                                    break;
                                                  case XPATH_NUMBER:
                                                    ppxVar6 = ___xmlGenericError();
                                                    pxVar2 = *ppxVar6;
                                                    ppvVar7 = ___xmlGenericErrorContext();
                                                    (*pxVar2)(*ppvVar7,"%s is a number\n",local_458)
                                                    ;
                                                    break;
                                                  case XPATH_STRING:
                                                    ppxVar6 = ___xmlGenericError();
                                                    pxVar2 = *ppxVar6;
                                                    ppvVar7 = ___xmlGenericErrorContext();
                                                    (*pxVar2)(*ppvVar7,"%s is a string\n",local_458)
                                                    ;
                                                    break;
                                                  case XPATH_POINT:
                                                    ppxVar6 = ___xmlGenericError();
                                                    pxVar2 = *ppxVar6;
                                                    ppvVar7 = ___xmlGenericErrorContext();
                                                    (*pxVar2)(*ppvVar7,"%s is a point\n",local_458);
                                                    break;
                                                  case XPATH_RANGE:
                                                    ppxVar6 = ___xmlGenericError();
                                                    pxVar2 = *ppxVar6;
                                                    ppvVar7 = ___xmlGenericErrorContext();
                                                    (*pxVar2)(*ppvVar7,"%s is a range\n",local_458);
                                                    break;
                                                  case XPATH_LOCATIONSET:
                                                    ppxVar6 = ___xmlGenericError();
                                                    pxVar2 = *ppxVar6;
                                                    ppvVar7 = ___xmlGenericErrorContext();
                                                    (*pxVar2)(*ppvVar7,"%s is a range\n",local_458);
                                                    break;
                                                  case XPATH_USERS:
                                                    ppxVar6 = ___xmlGenericError();
                                                    pxVar2 = *ppxVar6;
                                                    ppvVar7 = ___xmlGenericErrorContext();
                                                    (*pxVar2)(*ppvVar7,"%s is user-defined\n",
                                                              local_458);
                                                    break;
                                                  case XPATH_XSLT_TREE:
                                                    ppxVar6 = ___xmlGenericError();
                                                    pxVar2 = *ppxVar6;
                                                    ppvVar7 = ___xmlGenericErrorContext();
                                                    (*pxVar2)(*ppvVar7,"%s is an XSLT value tree\n",
                                                              local_458);
                                                  }
                                                  _xmlXPathFreeObject(local_38);
                                                }
                                                local_40->pctxt->node = (xmlNodePtr)0x0;
                                              }
                                            }
                                            else {
                                              iVar3 = _strcmp((char *)local_2c8,"cd");
                                              if (iVar3 == 0) {
                                                if (local_458[0] == '\0') {
                                                  local_40->node = (xmlNodePtr)local_40->doc;
                                                }
                                                else {
                                                  local_40->pctxt->node = local_40->node;
                                                  local_38 = _xmlXPathEval(local_458,local_40->pctxt
                                                                          );
                                                  if (local_38 == (xmlXPathObjectPtr)0x0) {
                                                    ppxVar6 = ___xmlGenericError();
                                                    pxVar2 = *ppxVar6;
                                                    ppvVar7 = ___xmlGenericErrorContext();
                                                    (*pxVar2)(*ppvVar7,"%s: no such node\n",
                                                              local_458);
                                                  }
                                                  else {
                                                    switch(local_38->type) {
                                                    case XPATH_UNDEFINED:
                                                      ppxVar6 = ___xmlGenericError();
                                                      pxVar2 = *ppxVar6;
                                                      ppvVar7 = ___xmlGenericErrorContext();
                                                      (*pxVar2)(*ppvVar7,"%s: no such node\n",
                                                                local_458);
                                                      break;
                                                    case XPATH_NODESET:
                                                      if (local_38->nodesetval == (xmlNodeSetPtr)0x0
                                                         ) {
                                                        ppxVar6 = ___xmlGenericError();
                                                        pxVar2 = *ppxVar6;
                                                        ppvVar7 = ___xmlGenericErrorContext();
                                                        (*pxVar2)(*ppvVar7,
                                                  "%s is an empty Node Set\n",local_458);
                                                  }
                                                  else if (local_38->nodesetval->nodeNr == 1) {
                                                    local_40->node = *local_38->nodesetval->nodeTab;
                                                    if ((local_40->node != (xmlNodePtr)0x0) &&
                                                       (local_40->node->type == XML_NAMESPACE_DECL))
                                                    {
                                                      ppxVar6 = ___xmlGenericError();
                                                      pxVar2 = *ppxVar6;
                                                      ppvVar7 = ___xmlGenericErrorContext();
                                                      (*pxVar2)(*ppvVar7,"cannot cd to namespace\n")
                                                      ;
                                                      local_40->node = (xmlNodePtr)0x0;
                                                    }
                                                  }
                                                  else {
                                                    ppxVar6 = ___xmlGenericError();
                                                    pxVar2 = *ppxVar6;
                                                    uVar1 = local_38->nodesetval->nodeNr;
                                                    ppvVar7 = ___xmlGenericErrorContext();
                                                    (*pxVar2)(*ppvVar7,"%s is a %d Node Set\n",
                                                              local_458,(ulong)uVar1);
                                                  }
                                                  break;
                                                  case XPATH_BOOLEAN:
                                                    ppxVar6 = ___xmlGenericError();
                                                    pxVar2 = *ppxVar6;
                                                    ppvVar7 = ___xmlGenericErrorContext();
                                                    (*pxVar2)(*ppvVar7,"%s is a Boolean\n",local_458
                                                             );
                                                    break;
                                                  case XPATH_NUMBER:
                                                    ppxVar6 = ___xmlGenericError();
                                                    pxVar2 = *ppxVar6;
                                                    ppvVar7 = ___xmlGenericErrorContext();
                                                    (*pxVar2)(*ppvVar7,"%s is a number\n",local_458)
                                                    ;
                                                    break;
                                                  case XPATH_STRING:
                                                    ppxVar6 = ___xmlGenericError();
                                                    pxVar2 = *ppxVar6;
                                                    ppvVar7 = ___xmlGenericErrorContext();
                                                    (*pxVar2)(*ppvVar7,"%s is a string\n",local_458)
                                                    ;
                                                    break;
                                                  case XPATH_POINT:
                                                    ppxVar6 = ___xmlGenericError();
                                                    pxVar2 = *ppxVar6;
                                                    ppvVar7 = ___xmlGenericErrorContext();
                                                    (*pxVar2)(*ppvVar7,"%s is a point\n",local_458);
                                                    break;
                                                  case XPATH_RANGE:
                                                    ppxVar6 = ___xmlGenericError();
                                                    pxVar2 = *ppxVar6;
                                                    ppvVar7 = ___xmlGenericErrorContext();
                                                    (*pxVar2)(*ppvVar7,"%s is a range\n",local_458);
                                                    break;
                                                  case XPATH_LOCATIONSET:
                                                    ppxVar6 = ___xmlGenericError();
                                                    pxVar2 = *ppxVar6;
                                                    ppvVar7 = ___xmlGenericErrorContext();
                                                    (*pxVar2)(*ppvVar7,"%s is a range\n",local_458);
                                                    break;
                                                  case XPATH_USERS:
                                                    ppxVar6 = ___xmlGenericError();
                                                    pxVar2 = *ppxVar6;
                                                    ppvVar7 = ___xmlGenericErrorContext();
                                                    (*pxVar2)(*ppvVar7,"%s is user-defined\n",
                                                              local_458);
                                                    break;
                                                  case XPATH_XSLT_TREE:
                                                    ppxVar6 = ___xmlGenericError();
                                                    pxVar2 = *ppxVar6;
                                                    ppvVar7 = ___xmlGenericErrorContext();
                                                    (*pxVar2)(*ppvVar7,"%s is an XSLT value tree\n",
                                                              local_458);
                                                  }
                                                  _xmlXPathFreeObject(local_38);
                                                  }
                                                  local_40->pctxt->node = (xmlNodePtr)0x0;
                                                }
                                              }
                                              else {
                                                iVar3 = _strcmp((char *)local_2c8,"cat");
                                                if (iVar3 == 0) {
                                                  if (local_458[0] == '\0') {
                                                    _xmlShellCat(local_40,(char *)0x0,local_40->node
                                                                 ,(xmlNodePtr)0x0);
                                                  }
                                                  else {
                                                    local_40->pctxt->node = local_40->node;
                                                    local_40->pctxt->node = local_40->node;
                                                    local_38 = _xmlXPathEval(local_458,
                                                                             local_40->pctxt);
                                                    if (local_38 == (xmlXPathObjectPtr)0x0) {
                                                      ppxVar6 = ___xmlGenericError();
                                                      pxVar2 = *ppxVar6;
                                                      ppvVar7 = ___xmlGenericErrorContext();
                                                      (*pxVar2)(*ppvVar7,"%s: no such node\n",
                                                                local_458);
                                                    }
                                                    else {
                                                      switch(local_38->type) {
                                                      case XPATH_UNDEFINED:
                                                        ppxVar6 = ___xmlGenericError();
                                                        pxVar2 = *ppxVar6;
                                                        ppvVar7 = ___xmlGenericErrorContext();
                                                        (*pxVar2)(*ppvVar7,"%s: no such node\n",
                                                                  local_458);
                                                        break;
                                                      case XPATH_NODESET:
                                                        if (local_38->nodesetval !=
                                                            (xmlNodeSetPtr)0x0) {
                                                          for (local_1c = 0;
                                                              local_1c <
                                                              local_38->nodesetval->nodeNr;
                                                              local_1c = local_1c + 1) {
                                                            if (0 < local_44) {
                                                              _fwrite(" -------\n",1,9,
                                                                      local_40->output);
                                                            }
                                                            _xmlShellCat(local_40,(char *)0x0,
                                                                         local_38->nodesetval->
                                                                         nodeTab[local_1c],
                                                                         (xmlNodePtr)0x0);
                                                          }
                                                        }
                                                        break;
                                                      case XPATH_BOOLEAN:
                                                        ppxVar6 = ___xmlGenericError();
                                                        pxVar2 = *ppxVar6;
                                                        ppvVar7 = ___xmlGenericErrorContext();
                                                        (*pxVar2)(*ppvVar7,"%s is a Boolean\n",
                                                                  local_458);
                                                        break;
                                                      case XPATH_NUMBER:
                                                        ppxVar6 = ___xmlGenericError();
                                                        pxVar2 = *ppxVar6;
                                                        ppvVar7 = ___xmlGenericErrorContext();
                                                        (*pxVar2)(*ppvVar7,"%s is a number\n",
                                                                  local_458);
                                                        break;
                                                      case XPATH_STRING:
                                                        ppxVar6 = ___xmlGenericError();
                                                        pxVar2 = *ppxVar6;
                                                        ppvVar7 = ___xmlGenericErrorContext();
                                                        (*pxVar2)(*ppvVar7,"%s is a string\n",
                                                                  local_458);
                                                        break;
                                                      case XPATH_POINT:
                                                        ppxVar6 = ___xmlGenericError();
                                                        pxVar2 = *ppxVar6;
                                                        ppvVar7 = ___xmlGenericErrorContext();
                                                        (*pxVar2)(*ppvVar7,"%s is a point\n",
                                                                  local_458);
                                                        break;
                                                      case XPATH_RANGE:
                                                        ppxVar6 = ___xmlGenericError();
                                                        pxVar2 = *ppxVar6;
                                                        ppvVar7 = ___xmlGenericErrorContext();
                                                        (*pxVar2)(*ppvVar7,"%s is a range\n",
                                                                  local_458);
                                                        break;
                                                      case XPATH_LOCATIONSET:
                                                        ppxVar6 = ___xmlGenericError();
                                                        pxVar2 = *ppxVar6;
                                                        ppvVar7 = ___xmlGenericErrorContext();
                                                        (*pxVar2)(*ppvVar7,"%s is a range\n",
                                                                  local_458);
                                                        break;
                                                      case XPATH_USERS:
                                                        ppxVar6 = ___xmlGenericError();
                                                        pxVar2 = *ppxVar6;
                                                        ppvVar7 = ___xmlGenericErrorContext();
                                                        (*pxVar2)(*ppvVar7,"%s is user-defined\n",
                                                                  local_458);
                                                        break;
                                                      case XPATH_XSLT_TREE:
                                                        ppxVar6 = ___xmlGenericError();
                                                        pxVar2 = *ppxVar6;
                                                        ppvVar7 = ___xmlGenericErrorContext();
                                                        (*pxVar2)(*ppvVar7,
                                                  "%s is an XSLT value tree\n",local_458);
                                                  }
                                                  _xmlXPathFreeObject(local_38);
                                                  }
                                                  local_40->pctxt->node = (xmlNodePtr)0x0;
                                                  }
                                                }
                                                else {
                                                  ppxVar6 = ___xmlGenericError();
                                                  pxVar2 = *ppxVar6;
                                                  ppvVar7 = ___xmlGenericErrorContext();
                                                  (*pxVar2)(*ppvVar7,"Unknown command %s\n",
                                                            local_2c8);
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            _free(local_58);
          }
        }
        _xmlXPathFreeContext(local_40->pctxt);
        if (local_40->loaded != 0) {
          _xmlFreeDoc(local_40->doc);
        }
        if (local_40->filename != (char *)0x0) {
          (*(code *)_xmlFree)(local_40->filename);
        }
        (*(code *)_xmlFree)(local_40);
        if (local_58 != (xmlChar *)0x0) {
          _free(local_58);
        }
      }
    }
  }
  return;
}

