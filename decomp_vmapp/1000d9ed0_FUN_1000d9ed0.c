
undefined4 FUN_1000d9ed0(char param_1)

{
  undefined4 uVar1;
  int iVar2;
  long local_58 [2];
  undefined4 local_48;
  QArrayData *local_38;
  int local_2c;
  ulong local_28;
  undefined1 local_19;
  
  local_28 = (ulong)DAT_1011c3750;
  if (param_1 == '\0') goto LAB_1000d9f91;
  local_2c = 8;
  local_38 = (QArrayData *)QString::fromAscii_helper("FACSAddress",0xb);
  iVar2 = FUN_1000e3350(&local_38,&DAT_1011c3768,0,&local_28,&local_2c);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1000d9f56;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1000d9f56:
  if ((iVar2 != 0) || (local_2c != 8)) {
    FUN_1008e3970("","vm",0,"FACS address is invalid.");
    return 0;
  }
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vm",2,"FACS address at sleep is 0x%llx",local_28);
  }
LAB_1000d9f91:
  local_58[0] = 0;
  local_58[1] = 0;
  local_48 = 0;
  FUN_10008d2d0(local_58,local_28,0x40);
  uVar1 = *(undefined4 *)(local_58[0] + 0xc);
  FUN_10008d3f0(local_58);
  return uVar1;
}

