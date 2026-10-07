
int FUN_1006bdc70(long *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  ulong uVar8;
  QString local_a8;
  undefined1 local_99;
  char local_98 [5];
  char local_93 [59];
  char local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  cVar1 = (**(code **)(*param_1 + 0x10))();
  if (cVar1 != '\0') {
    FUN_1008e3970("","prl_net",0,"ASSERT( %s ) occured in %s:%d [%s]","!is_open()",
                  "prlnet_tap_common.cpp",0x3b,"open_prlnet");
  }
  local_48 = 0;
  uStack_40 = 0;
  local_58[0] = '\0';
  local_58[1] = '\0';
  local_58[2] = '\0';
  local_58[3] = '\0';
  local_58[4] = '\0';
  local_58[5] = '\0';
  local_58[6] = '\0';
  local_58[7] = '\0';
  local_58[8] = '\0';
  local_58[9] = '\0';
  local_58[10] = '\0';
  local_58[0xb] = '\0';
  local_58[0xc] = '\0';
  local_58[0xd] = '\0';
  local_58[0xe] = '\0';
  local_58[0xf] = '\0';
  uVar8 = 0;
  do {
    _snprintf(local_98,0x40,"/dev/prltap%u",uVar8);
    iVar2 = _open(local_98,2);
    if (-1 < iVar2) {
      _strncpy(local_58,local_93,0x10);
      _strlen(local_93);
      QString::fromUtf8_helper((char *)&local_a8,(int)local_93);
      QString::operator=((QString *)(param_1 + 2),&local_a8);
      if (*(int *)local_a8.field0_0x0 != -1) {
        if (*(int *)local_a8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
          local_99 = *(int *)local_a8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_99) goto LAB_1006bdde8;
        }
        QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
      }
LAB_1006bdde8:
      uVar7 = _fcntl(iVar2,3,0);
      iVar3 = _fcntl(iVar2,4,(ulong)(uVar7 | 4));
      if (iVar3 < 0) {
        piVar6 = ___error();
        FUN_1008e3970("","prl_net",0,"Error: can\'t set O_NONBLOCK, errno %u",*piVar6);
        iVar3 = -1;
      }
      else {
        iVar4 = _socket(2,2,0);
        iVar3 = -1;
        if (-1 < iVar4) {
          iVar3 = 0;
          iVar5 = _ioctl(iVar4,0xc0206933,local_58);
          if (iVar5 < 0) {
            piVar6 = ___error();
            FUN_1008e3970("","prl_net",0,"Error: can\'t get MTU of dev %s, errno %u",local_58,
                          *piVar6);
            iVar3 = -1;
          }
          else {
            *(undefined4 *)(param_1 + 7) = (undefined4)local_48;
            *(int *)(param_1 + 0xb) = iVar2;
          }
          if (0 < iVar4) {
            _close(iVar4);
          }
        }
      }
      if ((0 < iVar2) && (iVar3 != 0)) {
        _close(iVar2);
      }
      goto LAB_1006bdf1f;
    }
    piVar6 = ___error();
    if (*piVar6 != 0x10) {
      piVar6 = ___error();
      FUN_1008e3970("","prl_net",0,"Error: can\'t open %s, errno %u",local_98,*piVar6);
      iVar3 = -1;
      goto LAB_1006bdf1f;
    }
    uVar7 = (int)uVar8 + 1;
    uVar8 = (ulong)uVar7;
  } while (uVar7 < 0x10);
  FUN_1008e3970("","prl_net",0,"Error: all tap devices are busy");
  iVar3 = -1;
LAB_1006bdf1f:
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

