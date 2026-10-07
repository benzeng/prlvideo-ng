
void FUN_1004269b0(string *param_1,string *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,long param_7)

{
  void *pvVar1;
  string *psVar2;
  void *pvVar3;
  
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 0x60) = param_3;
  *(undefined8 *)(param_1 + 0x68) = param_4;
  *(undefined8 *)(param_1 + 0x70) = param_5;
  param_1[0xe0] = (string)0x0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  param_1[0x9a] = (string)0x0;
  *(undefined2 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  std::string::operator=(param_1,param_2);
  if (((byte)*param_1 & 1) == 0) {
    psVar2 = param_1 + 1;
  }
  else {
    psVar2 = *(string **)(param_1 + 0x10);
  }
  *(string **)(param_1 + 0x48) = psVar2;
  FUN_100427170(param_1);
  FUN_100427f40();
  if (param_7 != 0) {
    pvVar3 = operator_new(8);
    FUN_10042d300(pvVar3,param_7);
    pvVar1 = *(void **)(param_1 + 0xf0);
    if (pvVar1 != pvVar3) {
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
      }
      *(void **)(param_1 + 0xf0) = pvVar3;
    }
  }
  FUN_100426b50(param_1,param_6);
  return;
}

