
void FUN_100263f50(long *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  bVar2 = true;
LAB_100263fa0:
  iVar3 = FUN_1002efb70(param_1[8],1,0xffffffff);
  if (iVar3 != -0xfffd) goto code_r0x000100263fbd;
  bVar2 = true;
  iVar3 = -0xfffd;
  goto LAB_100263fd8;
code_r0x000100263fbd:
  if (iVar3 == -0xfffc) {
    return;
  }
  if (bVar2) {
LAB_100263fd8:
    QMutex::lock();
    FUN_1002ef6b0(param_1[8]);
    if (((char)param_1[0x17] != '\0') && (*(int *)param_1[0x12] != 0)) {
      *(undefined1 *)(param_1 + 0x17) = 0;
      (**(code **)(*param_1 + 0x68))(param_1);
    }
    if (param_1[0x13] != 0) {
      FUN_100264110(param_1);
      LOCK();
      iVar1 = *(int *)(param_1[0x12] + 0x102c);
      *(int *)(param_1[0x12] + 0x102c) = 0;
      UNLOCK();
      if ((iVar1 != 0) && (*(int *)(param_1[0x16] + 0x14) != 0)) {
        (**(code **)(*(long *)param_1[0x13] + 0x18))((long *)param_1[0x13],param_1 + 0x15);
        FUN_100269b40(param_1 + 0x15);
      }
    }
    if (iVar3 == -0xfffe) {
      bVar2 = false;
    }
    QMutex::unlock();
  }
  goto LAB_100263fa0;
}

