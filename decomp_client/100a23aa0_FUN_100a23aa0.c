
undefined8 FUN_100a23aa0(undefined8 param_1,undefined4 *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  uint *puVar5;
  undefined4 local_80 [2];
  void *local_78;
  void *local_70;
  undefined4 local_60;
  string local_58 [24];
  undefined8 local_40;
  undefined8 local_38;
  uint *local_30;
  
  local_30 = (uint *)0x0;
  iVar3 = _PrlEvent_GetDataPtr(param_1,&local_30);
  if (iVar3 < 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = *local_30;
    uVar4 = 0;
    if ((uVar1 < 0xf) && ((0x7c54U >> (uVar1 & 0x1f) & 1) != 0)) {
      puVar5 = local_30 + 3;
      cVar2 = FUN_100a33020(uVar1,puVar5,local_30[2]);
      if (cVar2 == '\0') {
        uVar4 = 0;
      }
      else {
        FUN_100a331f0(local_80,uVar1,1,puVar5);
        *param_2 = local_80[0];
        if (local_80 != param_2) {
          FUN_100a29610(param_2 + 2,local_78,local_70);
        }
        param_2[8] = local_60;
        std::string::operator=((string *)(param_2 + 10),local_58);
        *(undefined8 *)(param_2 + 0x12) = local_38;
        *(undefined8 *)(param_2 + 0x10) = local_40;
        std::string::~string(local_58);
        if (local_78 != (void *)0x0) {
          if (local_70 != local_78) {
            local_70 = local_78;
          }
          operator_delete(local_78);
        }
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}

