
undefined8 * FUN_10029d760(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (*param_1 != *param_2) {
    FUN_1008e3970("AudioT","LocalDevices",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "from_fmt.type() == to_fmt.type()","../Sound/AudioTransform.cpp",0x3a2,"create");
  }
  iVar1 = param_1[2];
  iVar2 = param_2[2];
  if ((((iVar1 != iVar2 * 8) && (iVar1 != iVar2 * 4)) && (iVar1 != iVar2)) && (iVar1 != iVar2 * 2))
  {
    FUN_1008e3970("AudioT","LocalDevices",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "(from_fmt.rate() == to_fmt.rate()) || (from_fmt.rate() == to_fmt.rate() * 2) || (from_fmt.rate() == to_fmt.rate() * 4) || (from_fmt.rate() == to_fmt.rate() * 8)"
                  ,"../Sound/AudioTransform.cpp",0x3a6,"create");
  }
  if (*param_1 != 5) {
    FUN_1008e3970("AudioT","LocalDevices",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "from_fmt.type() == CAudioFormat::FLOAT","../Sound/AudioTransform.cpp",0x3a7,
                  "create");
  }
  puVar3 = operator_new(0x3d0,(nothrow_t *)PTR_nothrow_100ba21c8);
  puVar4 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_10029e650(puVar3,param_1,param_2);
    *puVar3 = &PTR_FUN_100bb25b8;
    puVar4 = puVar3;
  }
  return puVar4;
}

