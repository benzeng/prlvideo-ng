
undefined8 FUN_100db7f60(undefined4 param_1,long *param_2,int *param_3,undefined8 *param_4)

{
  int *piVar1;
  ulong uVar2;
  int iVar3;
  pid_t pVar4;
  long *plVar5;
  undefined8 uVar6;
  char local_58 [29];
  undefined1 local_3b;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  *param_3 = 0;
  *param_2 = 0;
  if (DAT_10230fe78 == '\0') {
    iVar3 = ___cxa_guard_acquire(&DAT_10230fe78);
    if (iVar3 != 0) {
      iVar3 = _getpagesize();
      uVar2 = (long)iVar3 + 0x8cf0b;
      DAT_10230fe70 = (int)uVar2 - (int)(uVar2 % (ulong)(long)iVar3);
      ___cxa_guard_release(&DAT_10230fe78);
    }
  }
  plVar5 = (long *)FUN_100db8cc0(param_1,DAT_10230fe70);
  if (plVar5 == (long *)0x0) {
    ___error();
    uVar6 = 0xffffffef;
  }
  else {
    if (param_4 == (undefined8 *)0x0) {
      if ((*plVar5 != 0x475254534c5250) || (iVar3 = *(int *)((long)plVar5 + 0xc), iVar3 == -1)) {
        _strncpy(local_58,(char *)plVar5,0x1d);
        local_3b = 0;
        if (DAT_10230fe78 == '\0') {
          iVar3 = ___cxa_guard_acquire(&DAT_10230fe78);
          if (iVar3 != 0) {
            iVar3 = _getpagesize();
            uVar2 = (long)iVar3 + 0x8cf0b;
            DAT_10230fe70 = (int)uVar2 - (int)(uVar2 % (ulong)(long)iVar3);
            ___cxa_guard_release(&DAT_10230fe78);
          }
        }
        FUN_100db8d10(plVar5,param_1,DAT_10230fe70);
        uVar6 = 0xfffffff0;
        goto LAB_100db81e4;
      }
      *param_2 = (long)(plVar5 + 0x200);
    }
    else {
      *param_2 = (long)(plVar5 + 0x200);
      if (DAT_10230fe78 == '\0') {
        iVar3 = ___cxa_guard_acquire(&DAT_10230fe78);
        if (iVar3 != 0) {
          iVar3 = _getpagesize();
          uVar2 = (long)iVar3 + 0x8cf0b;
          DAT_10230fe70 = (int)uVar2 - (int)(uVar2 % (ulong)(long)iVar3);
          ___cxa_guard_release(&DAT_10230fe78);
        }
      }
      if (DAT_10230fe78 == '\0') {
        iVar3 = ___cxa_guard_acquire(&DAT_10230fe78);
        if (iVar3 != 0) {
          iVar3 = _getpagesize();
          uVar2 = (long)iVar3 + 0x8cf0b;
          DAT_10230fe70 = (int)uVar2 - (int)(uVar2 % (ulong)(long)iVar3);
          ___cxa_guard_release(&DAT_10230fe78);
        }
      }
      ___bzero(plVar5,DAT_10230fe70);
      *plVar5 = 0x475254534c5250;
      *(undefined4 *)(plVar5 + 1) = *(undefined4 *)(param_4 + 1);
      pVar4 = _getpid();
      *(pid_t *)((long)plVar5 + 0xc) = pVar4;
      _strncpy((char *)(plVar5 + 3),(char *)*param_4,0xe8);
      *(undefined1 *)((long)plVar5 + 0xff) = 0;
      _strncpy((char *)(*param_2 + 8),(char *)param_4[2],0xf0);
      *(undefined1 *)(*param_2 + 0xf7) = 0;
      *(undefined4 *)*param_2 = 0xdead7770;
      iVar3 = *(int *)((long)plVar5 + 0xc);
    }
    pVar4 = _getpid();
    if (iVar3 == pVar4) {
      LOCK();
      *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
      UNLOCK();
    }
    LOCK();
    piVar1 = (int *)((long)plVar5 + 0x14);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    *param_3 = iVar3;
    uVar6 = 0;
  }
LAB_100db81e4:
  if (*(long *)PTR____stack_chk_guard_1021e1840 == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

