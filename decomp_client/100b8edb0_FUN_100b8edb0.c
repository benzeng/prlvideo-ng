
undefined8 FUN_100b8edb0(undefined8 param_1,byte *param_2)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  QArrayData *local_30;
  uint *local_28;
  undefined1 local_19;
  
  local_30 = (QArrayData *)QString::fromAscii_helper("-",1);
  QString::split(&local_28,param_1,&local_30,0,1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100b8ee1e;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100b8ee1e:
  uVar4 = local_28[2];
  uVar3 = local_28[3];
  if (uVar3 - uVar4 != 3) {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","lst.size() == 3",
                  "Pd4License.cpp",0x77e,"GetLicenseShortBin");
    uVar4 = local_28[2];
    uVar3 = local_28[3];
  }
  if (uVar3 - uVar4 == 3) {
    if (1 < *local_28) {
      FUN_100036c40(&local_28);
      uVar4 = local_28[2];
    }
    uVar1 = QString::toUShort((bool *)(local_28 + (long)(int)uVar4 * 2 + 8),0);
    *param_2 = (byte)uVar1 ^ 0x4e;
    param_2[1] = (byte)((ushort)uVar1 >> 8) ^ 0x41;
    if (1 < *local_28) {
      FUN_100036c40(&local_28);
    }
    uVar1 = QString::toUShort((bool *)(local_28 + (long)(int)local_28[2] * 2 + 6),0);
    param_2[2] = (byte)uVar1 ^ 0x44;
    param_2[3] = (byte)((ushort)uVar1 >> 8) ^ 0x56;
    if (1 < *local_28) {
      FUN_100036c40(&local_28);
    }
    iVar2 = QString::toUShort((bool *)(local_28 + (long)(int)local_28[2] * 2 + 4),0);
    uVar3 = iVar2 << 4 ^ 0x5240;
    param_2[4] = (byte)(uVar3 >> 8);
    param_2[5] = (byte)uVar3;
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
    FUN_100df99c0("","License",0,"Invalid short product id!");
  }
  FUN_100039a80(&local_28);
  return uVar5;
}

