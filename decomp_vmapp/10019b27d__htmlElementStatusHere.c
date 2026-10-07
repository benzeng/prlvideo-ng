
htmlStatus _htmlElementStatusHere(htmlElemDesc *param_1,htmlElemDesc *param_2)

{
  int iVar1;
  htmlStatus local_20;
  htmlStatus local_1c;
  
  if ((param_1 == (htmlElemDesc *)0x0) || (param_2 == (htmlElemDesc *)0x0)) {
    local_20 = HTML_INVALID;
  }
  else {
    iVar1 = _htmlElementAllowedHere(param_1,(xmlChar *)param_2->name);
    if (iVar1 == 0) {
      local_20 = HTML_INVALID;
    }
    else {
      if (param_2->dtd == '\0') {
        local_1c = HTML_VALID;
      }
      else {
        local_1c = HTML_DEPRECATED;
      }
      local_20 = local_1c;
    }
  }
  return local_20;
}

