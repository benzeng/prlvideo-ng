
undefined8 FUN_100db8210(undefined8 *param_1,pthread_mutex_t *param_2)

{
  uint *puVar1;
  ulong uVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  pid_t pVar6;
  int iVar7;
  long lVar8;
  char local_438 [1024];
  long local_38;
  
  lVar5 = *(long *)PTR____stack_chk_guard_1021e1840;
  lVar8 = param_1[1];
  local_38 = lVar5;
  if (lVar8 == 0) goto LAB_100db8384;
  if (param_2 == (pthread_mutex_t *)0x0) {
LAB_100db8260:
    if (*(int *)(lVar8 + 0x8bf08) == 0) {
      ___bzero(local_438,0x400);
      LOCK();
      puVar1 = (uint *)(lVar8 + -0xfec);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if (uVar3 < 2) {
        _strcpy(local_438,(char *)(lVar8 + -0xfe8));
        *(undefined8 *)(lVar8 + -0x1000) = 0;
      }
      param_1[1] = 0;
      iVar7 = *(int *)(lVar8 + -0xff4);
      pVar6 = _getpid();
      if (iVar7 == pVar6) {
        LOCK();
        puVar1 = (uint *)(lVar8 + -0xff0);
        uVar3 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if (uVar3 < 2) {
          DAT_1023191d0 = DAT_1023191d0 & (long)~(1 << (*(byte *)(lVar8 + -0xff8) & 0x1f));
          *(undefined4 *)(lVar8 + -0xff4) = 0xffffffff;
        }
      }
      uVar4 = *(undefined4 *)param_1;
      if (DAT_10230fe78 == '\0') {
        iVar7 = ___cxa_guard_acquire(&DAT_10230fe78);
        if (iVar7 != 0) {
          iVar7 = _getpagesize();
          uVar2 = (long)iVar7 + 0x8cf0b;
          DAT_10230fe70 = (int)uVar2 - (int)(uVar2 % (ulong)(long)iVar7);
          ___cxa_guard_release(&DAT_10230fe78);
        }
      }
      FUN_100db8d10(lVar8 + -0x1000,uVar4,DAT_10230fe70);
      *param_1 = 0xffffffffffffffff;
      if (local_438[0] != '\0') {
        FUN_100db8ac0(local_438);
      }
    }
    if (param_2 == (pthread_mutex_t *)0x0) goto LAB_100db8384;
  }
  else {
    _pthread_mutex_lock(param_2);
    lVar8 = param_1[1];
    if (lVar8 != 0) goto LAB_100db8260;
  }
  _pthread_mutex_unlock(param_2);
LAB_100db8384:
  if (lVar5 == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

