
void _xmlTextReaderSetErrorHandler(void *param_1,long param_2,undefined8 param_3)

{
  if (param_2 == 0) {
    *(code **)(**(long **)((long)param_1 + 0x20) + 0xb0) = _xmlParserError;
    *(code **)(*(long *)((long)param_1 + 0x20) + 0xa8) = _xmlParserValidityError;
    *(code **)(**(long **)((long)param_1 + 0x20) + 0xa8) = _xmlParserWarning;
    *(code **)(*(long *)((long)param_1 + 0x20) + 0xb0) = _xmlParserValidityWarning;
    *(undefined8 *)((long)param_1 + 0xc0) = 0;
    *(undefined8 *)((long)param_1 + 0x148) = 0;
    *(undefined8 *)((long)param_1 + 200) = 0;
    if (*(long *)((long)param_1 + 0xd8) != 0) {
      _xmlRelaxNGSetValidErrors
                (*(xmlRelaxNGValidCtxtPtr *)((long)param_1 + 0xd8),(xmlRelaxNGValidityErrorFunc)0x0,
                 (xmlRelaxNGValidityWarningFunc)0x0,param_1);
      _xmlRelaxNGSetValidStructuredErrors
                (*(xmlRelaxNGValidCtxtPtr *)((long)param_1 + 0xd8),(xmlStructuredErrorFunc)0x0,
                 param_1);
    }
    if (*(long *)((long)param_1 + 0xf8) != 0) {
      _xmlSchemaSetValidErrors(*(undefined8 *)((long)param_1 + 0xf8),0,0,param_1);
      _xmlSchemaSetValidStructuredErrors(*(undefined8 *)((long)param_1 + 0xf8),0,param_1);
    }
  }
  else {
    *(code **)(**(long **)((long)param_1 + 0x20) + 0xb0) = FUN_10022b7b8;
    *(undefined8 *)(**(long **)((long)param_1 + 0x20) + 0xf8) = 0;
    *(code **)(*(long *)((long)param_1 + 0x20) + 0xa8) = FUN_10022b9a2;
    *(code **)(**(long **)((long)param_1 + 0x20) + 0xa8) = FUN_10022b8ad;
    *(code **)(*(long *)((long)param_1 + 0x20) + 0xb0) = FUN_10022bacc;
    *(long *)((long)param_1 + 0xc0) = param_2;
    *(undefined8 *)((long)param_1 + 0x148) = 0;
    *(undefined8 *)((long)param_1 + 200) = param_3;
    if (*(long *)((long)param_1 + 0xd8) != 0) {
      _xmlRelaxNGSetValidErrors
                (*(xmlRelaxNGValidCtxtPtr *)((long)param_1 + 0xd8),FUN_10022a4e3,FUN_10022a65a,
                 param_1);
      _xmlRelaxNGSetValidStructuredErrors
                (*(xmlRelaxNGValidCtxtPtr *)((long)param_1 + 0xd8),(xmlStructuredErrorFunc)0x0,
                 param_1);
    }
    if (*(long *)((long)param_1 + 0xf8) != 0) {
      _xmlSchemaSetValidErrors
                (*(undefined8 *)((long)param_1 + 0xf8),FUN_10022a4e3,FUN_10022a65a,param_1);
      _xmlSchemaSetValidStructuredErrors(*(undefined8 *)((long)param_1 + 0xf8),0,param_1);
    }
  }
  return;
}

