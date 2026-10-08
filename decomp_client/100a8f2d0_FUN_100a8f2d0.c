
undefined1 FUN_100a8f2d0(long param_1,undefined4 param_2,long *param_3,undefined4 param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 uVar8;
  QArrayData *pQVar9;
  long lVar10;
  QArrayData *local_178;
  QArrayData *local_168;
  QArrayData *local_158;
  undefined8 local_150;
  long local_148;
  undefined1 local_139;
  undefined1 local_138 [256];
  long local_38;
  
  lVar10 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar10;
  if (*(int *)(param_1 + 0x68) != 1) {
    uVar8 = 0;
    goto LAB_100a8f729;
  }
  plVar2 = (long *)*param_3;
  *param_3 = 0;
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  lVar3 = **(long **)(*(long *)(param_1 + 0x308) + 0x10);
  local_148 = 0;
  local_150 = 0;
  if (*(long *)(lVar3 + 0x78) != 0) {
    local_150 = *(undefined8 *)(*(long *)(lVar3 + 0x78) + 0x10);
  }
  local_148 = FUN_100beeba0(&local_148,&local_150,*(undefined4 *)(lVar3 + 100));
  if (local_148 == 0) {
    uVar6 = FUN_100c63310();
    FUN_100c63950(uVar6,local_138,0x100);
    pQVar9 = *(QArrayData **)(param_1 + 0x18);
    if (1 < *(int *)pQVar9 + 1U) {
      LOCK();
      *(int *)pQVar9 = *(int *)pQVar9 + 1;
      local_139 = *(int *)pQVar9 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_100df99c0("","IOCommunication",0,
                  "%sSSL error: can\'t create SSL_SESSION from ANSI (SSL error: %s)",
                  local_158 + *(long *)(local_158 + 0x10),local_138);
    if (*(int *)local_158 != -1) {
      if (*(int *)local_158 != 0) {
        LOCK();
        *(int *)local_158 = *(int *)local_158 + -1;
        local_139 = *(int *)local_158 != 0;
        UNLOCK();
        if ((bool)local_139) goto LAB_100a8f50a;
      }
      QArrayData::deallocate(local_158,1,8);
    }
LAB_100a8f50a:
    if (*(int *)pQVar9 == -1) {
      uVar8 = 0;
      goto LAB_100a8f729;
    }
    if (*(int *)pQVar9 != 0) {
      LOCK();
      *(int *)pQVar9 = *(int *)pQVar9 + -1;
      local_139 = *(int *)pQVar9 != 0;
      UNLOCK();
      if ((bool)local_139) {
        uVar8 = 0;
        goto LAB_100a8f729;
      }
    }
  }
  else {
    uVar6 = FUN_100aaabe0(*(undefined8 *)(param_1 + 0x348));
    iVar5 = FUN_100be9720(uVar6,local_148);
    FUN_100be8ab0(local_148);
    if (iVar5 == 1) {
      cVar4 = FUN_100a817a0(param_1,param_2,param_4,1);
      if (cVar4 == '\0') {
        uVar8 = 0;
        lVar10 = *(long *)PTR____stack_chk_guard_1021e1840;
        goto LAB_100a8f729;
      }
      lVar7 = FUN_100be4680(*(undefined8 *)(param_1 + 0x328),8,0,0);
      lVar10 = *(long *)PTR____stack_chk_guard_1021e1840;
      if (lVar7 != 0) {
        lVar3 = *(long *)(lVar3 + 0x80);
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
        }
        plVar2 = (long *)*param_3;
        *param_3 = lVar3;
        uVar8 = 1;
        if (plVar2 != (long *)0x0) {
          LOCK();
          plVar1 = plVar2 + 1;
          lVar3 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)(*plVar2 + 0x10))();
          }
        }
        goto LAB_100a8f729;
      }
      pQVar9 = *(QArrayData **)(param_1 + 0x18);
      if (1 < *(int *)pQVar9 + 1U) {
        LOCK();
        *(int *)pQVar9 = *(int *)pQVar9 + 1;
        local_139 = *(int *)pQVar9 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_100df99c0("","IOCommunication",0,"%sSSL session was not reused!",
                    local_178 + *(long *)(local_178 + 0x10));
      if (*(int *)local_178 != -1) {
        if (*(int *)local_178 != 0) {
          LOCK();
          *(int *)local_178 = *(int *)local_178 + -1;
          local_139 = *(int *)local_178 != 0;
          UNLOCK();
          if ((bool)local_139) goto LAB_100a8f6d1;
        }
        QArrayData::deallocate(local_178,1,8);
      }
LAB_100a8f6d1:
      if (*(int *)pQVar9 == -1) {
        uVar8 = 0;
        goto LAB_100a8f729;
      }
      if (*(int *)pQVar9 != 0) {
        LOCK();
        *(int *)pQVar9 = *(int *)pQVar9 + -1;
        local_139 = *(int *)pQVar9 != 0;
        UNLOCK();
        if ((bool)local_139) {
          uVar8 = 0;
          goto LAB_100a8f729;
        }
      }
    }
    else {
      pQVar9 = *(QArrayData **)(param_1 + 0x18);
      if (1 < *(int *)pQVar9 + 1U) {
        LOCK();
        *(int *)pQVar9 = *(int *)pQVar9 + 1;
        local_139 = *(int *)pQVar9 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      lVar10 = *(long *)PTR____stack_chk_guard_1021e1840;
      FUN_100df99c0("","IOCommunication",0,"%sSSL error: can\'t add SSL_SESSION",
                    local_168 + *(long *)(local_168 + 0x10));
      if (*(int *)local_168 != -1) {
        if (*(int *)local_168 != 0) {
          LOCK();
          *(int *)local_168 = *(int *)local_168 + -1;
          local_139 = *(int *)local_168 != 0;
          UNLOCK();
          if ((bool)local_139) goto LAB_100a8f5c5;
        }
        QArrayData::deallocate(local_168,1,8);
      }
LAB_100a8f5c5:
      if (*(int *)pQVar9 == -1) {
        uVar8 = 0;
        goto LAB_100a8f729;
      }
      if (*(int *)pQVar9 != 0) {
        LOCK();
        *(int *)pQVar9 = *(int *)pQVar9 + -1;
        local_139 = *(int *)pQVar9 != 0;
        UNLOCK();
        if ((bool)local_139) {
          uVar8 = 0;
          goto LAB_100a8f729;
        }
      }
    }
  }
  QArrayData::deallocate(pQVar9,2,8);
  uVar8 = 0;
LAB_100a8f729:
  if (lVar10 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar8;
}

