
int FUN_100b0f190(long *param_1,ulong param_2,undefined8 *param_3)

{
  long lVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  QArrayData *local_40;
  
  cVar3 = (**(code **)(*param_1 + 0x150))();
  if (cVar3 != '\0') {
    if ((*(byte *)(param_1 + 3) & 3) == 0) {
      pcVar2 = (code *)*param_3;
      while( true ) {
        if (pcVar2 != (code *)0x0) {
          (*pcVar2)(0x80000003,param_3[1]);
          return -0x7ffffffd;
        }
        if (param_3[4] == 0) break;
        param_3 = (undefined8 *)param_3[4];
        pcVar2 = (code *)*param_3;
      }
      return -0x7ffffffd;
    }
    uVar8 = param_1[4];
    if (uVar8 < param_2) {
      lVar1 = param_1[7];
      iVar4 = (**(code **)(*param_1 + 0x178))(param_1,uVar8,param_2 - uVar8,param_3);
      if (iVar4 == 0) {
        param_1[4] = param_2;
        lVar6 = (**(code **)(*param_1 + 0x160))(param_1);
        if (lVar6 != lVar1 * param_2) {
          FUN_100df99c0("","dimg",0,"ASSERT( %s ) occured in %s:%d [%s]",
                        "GetFileSize() == UINT64(newFileSize)","DiskImagePlain.cpp",0x210,
                        "IncreaseCapacity");
        }
      }
      else {
        uVar8 = lVar1 * uVar8;
        uVar5 = (**(code **)(*param_1 + 0x160))(param_1);
        if (uVar5 < uVar8) {
          FUN_100df99c0("","dimg",0,"ASSERT( %s ) occured in %s:%d [%s]",
                        "GetFileSize() >= (PRL_UINT64)oldFileSize","DiskImagePlain.cpp",0x215,
                        "IncreaseCapacity");
        }
        cVar3 = (**(code **)(*(long *)param_1[1] + 0x70))((long *)param_1[1],uVar8);
        if (cVar3 == '\0') {
          FUN_100df99c0("","dimg",0,"[CPlainImage::IncreaseCapacity] SEOF failed 0x%llx",uVar8);
        }
      }
      (**(code **)(*param_1 + 0x30))(param_1);
      pcVar2 = *(code **)(*param_1 + 0x188);
      uVar7 = (**(code **)(*param_1 + 0x160))(param_1);
      (*pcVar2)(param_1,uVar7);
      return iVar4;
    }
    pcVar2 = (code *)*param_3;
    while( true ) {
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(0x80021011,param_3[1]);
        return -0x7ffdefef;
      }
      if (param_3[4] == 0) break;
      param_3 = (undefined8 *)param_3[4];
      pcVar2 = (code *)*param_3;
    }
    return -0x7ffdefef;
  }
  QString::toUtf8();
  FUN_100df99c0("","dimg",0,
                "Can\'t increase plain disk \"%s\" capacity, because it is not opened. [%p]",
                local_40 + *(long *)(local_40 + 0x10),param_1[1]);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_100b0f2ff;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100b0f2ff:
  pcVar2 = (code *)*param_3;
  while( true ) {
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(0x80021021,param_3[1]);
      return -0x7ffdefdf;
    }
    if (param_3[4] == 0) break;
    param_3 = (undefined8 *)param_3[4];
    pcVar2 = (code *)*param_3;
  }
  return -0x7ffdefdf;
}

