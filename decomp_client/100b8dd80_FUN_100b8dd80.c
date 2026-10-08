
undefined8 FUN_100b8dd80(undefined8 param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  QArrayData *local_48;
  uint *local_40;
  undefined1 local_31;
  
  local_48 = (QArrayData *)QString::fromAscii_helper("-",1);
  QString::split(&local_40,param_1,&local_48,0,1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b8ddf4;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100b8ddf4:
  uVar1 = local_40[2];
  uVar2 = local_40[3];
  if (uVar2 - uVar1 != 6) {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","lst.size() == 6",
                  "Pd4License.cpp",0x6dd,"GetLicenseBin");
    uVar1 = local_40[2];
    uVar2 = local_40[3];
  }
  if (uVar2 - uVar1 == 6) {
    uVar6 = 1;
    lVar4 = 0;
    if ((int)uVar1 < (int)uVar2) {
      uVar7 = 0;
      do {
        if (1 < *local_40) {
          FUN_100036c40(&local_40);
        }
        uVar3 = QString::toUShort((bool *)(local_40 + ((int)local_40[2] + lVar4) * 2 + 4),0);
        uVar5 = (ulong)((int)uVar7 + 1);
        *(byte *)(param_2 + uVar7) = "NADVORETRAV"[uVar7] ^ (byte)uVar3;
        if ((int)lVar4 != 0) {
          *(byte *)(param_2 + uVar5) = (byte)((ushort)uVar3 >> 8) ^ "NADVORETRAV"[uVar5];
          uVar5 = (ulong)((int)uVar7 + 2);
        }
        lVar4 = lVar4 + 1;
        uVar7 = uVar5;
      } while (lVar4 < (long)(int)local_40[3] - (long)(int)local_40[2]);
      uVar6 = 1;
    }
  }
  else {
    uVar6 = 0;
    FUN_100df99c0("","License",0,"Invalid product id!");
  }
  FUN_100039a80(&local_40);
  return uVar6;
}

