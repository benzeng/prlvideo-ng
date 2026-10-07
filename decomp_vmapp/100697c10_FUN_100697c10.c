
void FUN_100697c10(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *param_2;
  *param_1 = lVar4;
  *(long *)((long)param_1 + *(long *)(lVar4 + -0x18)) = param_2[1];
  param_1[1] = 0;
  QMutex::QMutex((QMutex *)(param_1 + 2),0);
  QMutex::QMutex((QMutex *)(param_1 + 3),0);
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = -1;
  param_1[7] = (long)param_1;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xc] = (long)param_1;
  *(undefined4 *)(param_1 + 0x11) = 0;
  lVar4 = 0;
  do {
    *(undefined4 *)((long)param_1 + lVar4 + 0xa0) = 0xffffffff;
    *(undefined4 *)((long)param_1 + lVar4 + 0xa4) = 0;
    lVar2 = (long)param_1 + lVar4 + 0x90;
    *(long *)((long)param_1 + lVar4 + 0x90) = lVar2;
    *(long *)((long)param_1 + lVar4 + 0x98) = lVar2;
    *(undefined4 *)((long)param_1 + lVar4 + 0xb8) = 0xffffffff;
    *(undefined4 *)((long)param_1 + lVar4 + 0xbc) = 0;
    lVar2 = (long)param_1 + lVar4 + 0xa8;
    *(long *)((long)param_1 + lVar4 + 0xa8) = lVar2;
    *(long *)((long)param_1 + lVar4 + 0xb0) = lVar2;
    *(undefined4 *)((long)param_1 + lVar4 + 0xd0) = 0xffffffff;
    *(undefined4 *)((long)param_1 + lVar4 + 0xd4) = 0;
    lVar2 = (long)param_1 + lVar4 + 0xc0;
    *(long *)((long)param_1 + lVar4 + 0xc0) = lVar2;
    *(long *)((long)param_1 + lVar4 + 200) = lVar2;
    *(undefined4 *)((long)param_1 + lVar4 + 0xe8) = 0xffffffff;
    *(undefined4 *)((long)param_1 + lVar4 + 0xec) = 0;
    lVar2 = (long)param_1 + lVar4 + 0xd8;
    *(long *)((long)param_1 + lVar4 + 0xd8) = lVar2;
    *(long *)((long)param_1 + lVar4 + 0xe0) = lVar2;
    lVar4 = lVar4 + 0x60;
  } while (lVar4 != 0x18000);
  param_1[0xd] = (long)(param_1 + 0xd);
  param_1[0xe] = (long)(param_1 + 0xd);
  plVar1 = param_1 + 0xf;
  param_1[0xf] = (long)plVar1;
  param_1[0x10] = (long)plVar1;
  lVar4 = 0;
  do {
    lVar2 = (long)param_1 + lVar4 + 0x90;
    *(long *)((long)param_1 + lVar4 + 0x80) = lVar2;
    *(long *)((long)param_1 + lVar4 + 0x90) = (long)param_1 + lVar4 + 0x78;
    *(long **)((long)param_1 + lVar4 + 0x98) = plVar1;
    param_1[0xf] = lVar2;
    lVar3 = (long)param_1 + lVar4 + 0xa8;
    *(long *)((long)param_1 + lVar4 + 0x98) = lVar3;
    *(long *)((long)param_1 + lVar4 + 0xa8) = lVar2;
    *(long **)((long)param_1 + lVar4 + 0xb0) = plVar1;
    param_1[0xf] = lVar3;
    lVar4 = lVar4 + 0x30;
  } while (lVar4 != 0x18000);
  param_1[0x3012] = 0;
  param_1[0x3014] = 0;
  *(undefined4 *)(param_1 + 0x3015) = 0;
  *(undefined4 *)((long)param_1 + 0x180ac) = 4;
  *(undefined4 *)(param_1 + 0x3016) = 0;
  *(undefined4 *)(param_1 + 0x3017) = 0;
  param_1[0x3018] = (long)param_1;
  param_1[0x3013] = (long)&PTR_FUN_100bcc300;
  param_1[0x3019] = (long)param_1;
  param_1[0x301a] = -1;
  *(undefined1 *)(param_1 + 0x301b) = 0;
  param_1[0x301c] = (long)(param_1 + 0x301c);
  param_1[0x301d] = (long)(param_1 + 0x301c);
  param_1[0x301e] = 0;
  return;
}

