
undefined4
_xmlSchemaCompareValuesWhtsp
          (undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 local_28;
  
  if ((param_1 == (undefined4 *)0x0) || (param_3 == (undefined4 *)0x0)) {
    local_28 = 0xfffffffe;
  }
  else {
    local_28 = FUN_100952450(*param_1,param_1,0,param_2,*param_3,param_3,0,param_4);
  }
  return local_28;
}

