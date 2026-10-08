
undefined4 FUN_1008d632d(undefined8 *param_1,char *param_2)

{
  xmlGenericErrorFunc pxVar1;
  int iVar2;
  xmlRelaxNGParserCtxtPtr ctxt;
  xmlRelaxNGPtr schema;
  xmlGenericErrorFunc *ppxVar3;
  void **ppvVar4;
  xmlRelaxNGValidCtxtPtr ctxt_00;
  undefined4 local_5c;
  
  ctxt = _xmlRelaxNGNewParserCtxt(param_2);
  _xmlRelaxNGSetParserErrors
            (ctxt,(xmlRelaxNGValidityErrorFunc)PTR__fprintf_1021e1898,
             (xmlRelaxNGValidityWarningFunc)PTR__fprintf_1021e1898,
             *(void **)PTR____stderrp_1021e1848);
  schema = _xmlRelaxNGParse(ctxt);
  _xmlRelaxNGFreeParserCtxt(ctxt);
  if (schema == (xmlRelaxNGPtr)0x0) {
    ppxVar3 = ___xmlGenericError();
    pxVar1 = *ppxVar3;
    ppvVar4 = ___xmlGenericErrorContext();
    (*pxVar1)(*ppvVar4,"Relax-NG schema %s failed to compile\n",param_2);
    local_5c = 0xffffffff;
  }
  else {
    ctxt_00 = _xmlRelaxNGNewValidCtxt(schema);
    _xmlRelaxNGSetValidErrors
              (ctxt_00,(xmlRelaxNGValidityErrorFunc)PTR__fprintf_1021e1898,
               (xmlRelaxNGValidityWarningFunc)PTR__fprintf_1021e1898,
               *(void **)PTR____stderrp_1021e1848);
    iVar2 = _xmlRelaxNGValidateDoc(ctxt_00,(xmlDocPtr)param_1[1]);
    if (iVar2 == 0) {
      _fprintf(*(FILE **)PTR____stderrp_1021e1848,"%s validates\n",*param_1);
    }
    else if (iVar2 < 1) {
      _fprintf(*(FILE **)PTR____stderrp_1021e1848,"%s validation generated an internal error\n",
               *param_1);
    }
    else {
      _fprintf(*(FILE **)PTR____stderrp_1021e1848,"%s fails to validate\n",*param_1);
    }
    _xmlRelaxNGFreeValidCtxt(ctxt_00);
    if (schema != (xmlRelaxNGPtr)0x0) {
      _xmlRelaxNGFree(schema);
    }
    local_5c = 0;
  }
  return local_5c;
}

