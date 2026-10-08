
int FUN_100b0f4a0(long *param_1,ulong param_2,long *param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  code *pcVar5;
  int iVar6;
  ulong uVar7;
  QArrayData *local_38;
  
  cVar2 = (**(code **)(*param_1 + 0x150))();
  if (cVar2 != '\0') {
    if ((*(byte *)(param_1 + 3) & 3) == 0) {
      while( true ) {
        if ((code *)*param_3 != (code *)0x0) {
          (*(code *)*param_3)(0x80000003,param_3[1]);
          return -0x7ffffffd;
        }
        if (param_3[4] == 0) break;
        param_3 = (long *)param_3[4];
      }
      return -0x7ffffffd;
    }
    if (param_2 < (ulong)param_1[4]) {
      uVar7 = param_1[7] * param_2;
      if (0x18fffff < uVar7) {
        cVar2 = (**(code **)(*(long *)param_1[1] + 0x70))((long *)param_1[1],uVar7);
        if (cVar2 == '\0') {
          FUN_100df99c0("","dimg",0,"[CPlainImage::DecreaseCapacity] SEOF failed 0x%llx",uVar7);
          iVar6 = -0x7ffddffe;
        }
        else {
          param_1[4] = param_2;
          iVar6 = 0;
        }
        (**(code **)(*param_1 + 0x30))(param_1);
        pcVar5 = *(code **)(*param_1 + 0x188);
        uVar4 = (**(code **)(*param_1 + 0x160))(param_1);
        (*pcVar5)(param_1,uVar4);
        iVar3 = iVar6;
        if (-1 < iVar6) {
          return 0;
        }
        while( true ) {
          pcVar5 = (code *)*param_3;
          if ((pcVar5 == (code *)0x0) && (param_3[4] == 0)) {
            return iVar6;
          }
          if ((-1 < iVar3) && (1 < *(uint *)(param_3 + 2))) {
            iVar1 = *(int *)((long)param_3 + 0x14);
            if (iVar3 < *(int *)((long)param_3 + 0x14)) {
              *(int *)((long)param_3 + 0x14) = iVar3;
              return iVar6;
            }
            *(int *)((long)param_3 + 0x14) = iVar3;
            iVar3 = (uint)(iVar3 - iVar1) / *(uint *)(param_3 + 2) + (int)param_3[3];
            *(int *)(param_3 + 3) = iVar3;
          }
          if (pcVar5 != (code *)0x0) break;
          param_3 = (long *)param_3[4];
        }
        (*pcVar5)(iVar3,param_3[1]);
        return iVar6;
      }
      FUN_100df99c0("","dimg",0,"[CPlainImage::DecreaseCapacity] Too small size for plain disk %llu"
                    ,uVar7);
      for (; pcVar5 = (code *)*param_3, pcVar5 == (code *)0x0; param_3 = (long *)param_3[4]) {
        if (param_3[4] == 0) {
          return -0x7ffdefef;
        }
      }
    }
    else {
      for (; pcVar5 = (code *)*param_3, pcVar5 == (code *)0x0; param_3 = (long *)param_3[4]) {
        if (param_3[4] == 0) {
          return -0x7ffdefef;
        }
      }
    }
    (*pcVar5)(0x80021011,param_3[1]);
    return -0x7ffdefef;
  }
  QString::toUtf8();
  FUN_100df99c0("","dimg",0,
                "Can\'t decrease plain disk \"%s\" capacity, because it is not opened. [%p]",
                local_38 + *(long *)(local_38 + 0x10),param_1[1]);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) goto LAB_100b0f5e4;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_100b0f5e4:
  while( true ) {
    if ((code *)*param_3 != (code *)0x0) {
      (*(code *)*param_3)(0x80021021,param_3[1]);
      return -0x7ffdefdf;
    }
    if (param_3[4] == 0) break;
    param_3 = (long *)param_3[4];
  }
  return -0x7ffdefdf;
}

