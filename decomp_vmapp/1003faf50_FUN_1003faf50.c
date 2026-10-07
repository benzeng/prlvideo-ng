
bool FUN_1003faf50(long *param_1,int param_2)

{
  long lVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_b0 [40];
  undefined1 local_88 [8];
  undefined1 *local_80;
  QArrayData *local_58;
  QArrayData *local_40;
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar1;
  if (param_1 == (long *)0x0) {
    bVar5 = false;
    goto LAB_1003fb09e;
  }
  FUN_100098d30(local_b0);
  iVar4 = (**(code **)(*param_1 + 0x90))(param_1,local_b0);
  if (iVar4 < 0) {
    bVar5 = false;
  }
  else {
    for (puVar2 = local_80; bVar5 = param_2 == 1, puVar2 != local_88;
        puVar2 = *(undefined1 **)(puVar2 + 8)) {
      cVar3 = FUN_100684c40(*(undefined4 *)(puVar2 + 0x10));
      if (cVar3 == '\0') {
        cVar3 = FUN_1006fa5d0(puVar2 + 0x28);
      }
      else {
        cVar3 = FUN_1006f9d00(puVar2 + 0x28);
      }
      bVar5 = true;
      if (cVar3 != '\0') break;
    }
    iVar4 = FUN_1007da300("devices.hdd.ssd",bVar5);
    bVar5 = iVar4 != 0;
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_1003fb05f;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1003fb05f:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) goto LAB_1003fb095;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_1003fb095:
  FUN_100098f20(local_88);
LAB_1003fb09e:
  if (lVar1 == local_38) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

