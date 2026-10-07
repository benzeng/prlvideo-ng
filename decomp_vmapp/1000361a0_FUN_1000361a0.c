
void FUN_1000361a0(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  QArrayData *local_38;
  undefined1 local_2b;
  undefined1 local_2a;
  
  if ((char)param_2[3] == '\0') {
    local_38 = (QArrayData *)QString::fromAscii_helper("",0);
  }
  else {
    local_38 = (QArrayData *)param_2[2];
    if (1 < *(int *)local_38 + 1U) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + 1;
      local_2b = *(int *)local_38 != 0;
      UNLOCK();
    }
  }
  lVar3 = *param_2;
  uVar4 = (ulong)*(uint *)(lVar3 + 8);
  if ((int)*(uint *)(lVar3 + 8) < *(int *)(lVar3 + 0xc)) {
    lVar5 = 0;
    do {
      cVar2 = FUN_100037f90(*(undefined8 *)(lVar3 + 0x10 + ((int)uVar4 + lVar5) * 8),&local_38,
                            (int)param_2[1]);
      uVar1 = *(undefined8 *)(*param_2 + 0x10 + (*(int *)(*param_2 + 8) + lVar5) * 8);
      if (cVar2 == '\0') {
        FUN_1004c07d0(param_1,uVar1,0xf000001c);
      }
      else {
        FUN_1004c07d0(param_1,uVar1,0);
      }
      lVar5 = lVar5 + 1;
      lVar3 = *param_2;
      uVar4 = (ulong)*(int *)(lVar3 + 8);
    } while (lVar5 < (long)((long)*(int *)(lVar3 + 0xc) - uVar4));
  }
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_2a = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return;
}

