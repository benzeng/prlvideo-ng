
undefined1
FUN_100445c00(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined4 param_5,int param_6)

{
  uint uVar1;
  undefined1 uVar2;
  QArrayData *local_58;
  uint local_50;
  undefined4 local_4c;
  uint local_48;
  char local_44;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  QByteArray::fromRawData((char *)&local_38,*(int *)((long)param_3 + 0xc) + (int)*param_3);
  qUncompress((uchar *)&local_40,(int)*(undefined8 *)(local_38 + 0x10) + (int)local_38);
  uVar1 = *(uint *)(local_40 + 4);
  if (uVar1 == 0) {
    uVar2 = 0;
    FUN_1008e3970("","IOEncoders",0,"ZRLEEncoder::readRect: Input data is corrupted");
  }
  else {
    if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_40,uVar1 + 1,*(uint *)(local_40 + 8) >> 0x1f);
      uVar1 = *(uint *)(local_40 + 4);
    }
    local_58 = local_40 + *(long *)(local_40 + 0x10);
    local_4c = 0;
    local_44 = '\0';
    local_50 = uVar1;
    local_48 = uVar1;
    if (param_6 < 0x20) {
      if (param_6 - 0xfU < 2) {
        FUN_100447c50(param_2,&local_58,param_4,param_5);
        uVar2 = 1;
      }
      else if (param_6 == 8) {
        FUN_1004488b0(param_2,&local_58,param_4,param_5);
        uVar2 = 1;
      }
      else {
        if (param_6 != 0x18) goto LAB_100445d79;
        FUN_100447160(param_2,&local_58,param_4,param_5);
        uVar2 = 1;
      }
    }
    else if (param_6 == 0x20) {
      FUN_1004465d0(param_2,&local_58,param_4,param_5);
      uVar2 = 1;
    }
    else {
LAB_100445d79:
      uVar2 = 0;
      FUN_1008e3970("","IOEncoders",0,"Can\'t decode for depth %d",param_6);
    }
    if ((local_44 != '\0') && (local_58 != (QArrayData *)0x0)) {
      operator_delete__(local_58);
    }
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100445de1;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100445de1:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return uVar2;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,1,8);
  }
  return uVar2;
}

