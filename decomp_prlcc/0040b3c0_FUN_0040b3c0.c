
bool FUN_0040b3c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_14;
  
  puVar1 = PTR_prl_xfunctions_0061bd60;
  lVar3 = (**(code **)(PTR_prl_xfunctions_0061bd60 + 0x68))(param_1,param_2,1);
  bVar4 = false;
  if (lVar3 != 0) {
    local_20 = 0;
    local_14 = 0;
    local_28 = 0;
    local_30 = 0;
    local_38 = 0;
    iVar2 = (**(code **)(puVar1 + 0xb8))
                      (param_1,*(undefined8 *)
                                ((long)*(int *)(param_1 + 0xe0) * 0x80 + 0x10 +
                                *(long *)(param_1 + 0xe8)),lVar3,0,1,0,0x21,&local_20,&local_14,
                       &local_28,&local_30,&local_38);
    bVar4 = iVar2 == 0;
  }
  return bVar4;
}

