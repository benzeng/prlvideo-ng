
int FUN_100aa39b0(long param_1,undefined4 param_2,undefined4 param_3,long param_4,int param_5,
                 undefined4 param_6,undefined8 param_7)

{
  QArrayData *pQVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  bool bVar7;
  char *pcVar8;
  bool bVar9;
  int local_180;
  QArrayData *local_158;
  QArrayData *local_148;
  undefined1 local_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  iVar6 = 0;
  local_180 = 0;
  do {
    QMutex::lock();
    iVar3 = FUN_100c58d60(*(undefined8 *)(param_1 + 0x138),0x8c,0,0);
    iVar4 = param_5 - iVar6;
    if (iVar3 <= param_5 - iVar6) {
      iVar4 = iVar3;
    }
    iVar3 = FUN_100c58980(*(undefined8 *)(param_1 + 0x138),iVar6 + param_4,iVar4);
    if (iVar3 == -1) {
      uVar5 = FUN_100c63310();
      iVar3 = FUN_100c58820(*(undefined8 *)(param_1 + 0x138),8);
      if (iVar3 == 0) {
        FUN_100c63950(uVar5,local_138,0x100);
        pQVar1 = *(QArrayData **)(param_1 + 0x10);
        if (1 < *(int *)pQVar1 + 1U) {
          LOCK();
          *(int *)pQVar1 = *(int *)pQVar1 + 1;
          UNLOCK();
        }
        QString::toLocal8Bit();
        FUN_100df99c0("","IOCommunication",0,
                      "%sError in SSL write: \'BIO_write(toWrite=%d)\' failed, but \'BIO_should_retry\' returned false (SSL error: %s)"
                      ,local_148 + *(long *)(local_148 + 0x10),iVar4,local_138);
        if (*(int *)local_148 != -1) {
          if (*(int *)local_148 != 0) {
            LOCK();
            *(int *)local_148 = *(int *)local_148 + -1;
            UNLOCK();
            if (*(int *)local_148 != 0) goto LAB_100aa3c1e;
          }
          QArrayData::deallocate(local_148,1,8);
        }
LAB_100aa3c1e:
        if (*(int *)pQVar1 != -1) {
          if (*(int *)pQVar1 != 0) {
            LOCK();
            *(int *)pQVar1 = *(int *)pQVar1 + -1;
            UNLOCK();
            if (*(int *)pQVar1 != 0) goto LAB_100aa3de0;
          }
          QArrayData::deallocate(pQVar1,2,8);
        }
      }
      else {
        iVar4 = FUN_100c58820(*(undefined8 *)(param_1 + 0x138),2);
        iVar3 = 0;
        if (iVar4 != 0) goto LAB_100aa3af0;
        FUN_100c63950(uVar5,local_138,0x100);
        pQVar1 = *(QArrayData **)(param_1 + 0x10);
        if (1 < *(int *)pQVar1 + 1U) {
          LOCK();
          *(int *)pQVar1 = *(int *)pQVar1 + 1;
          UNLOCK();
        }
        QString::toLocal8Bit();
        lVar2 = *(long *)(local_158 + 0x10);
        iVar4 = FUN_100c58820(*(undefined8 *)(param_1 + 0x138),1);
        pcVar8 = "false";
        if (iVar4 != 0) {
          pcVar8 = "true";
        }
        FUN_100df99c0("","IOCommunication",0,
                      "%sError in SSL write: \'BIO_should_read\' = %s ? (SSL error: %s)",
                      local_158 + lVar2,pcVar8,local_138);
        if (*(int *)local_158 != -1) {
          if (*(int *)local_158 != 0) {
            LOCK();
            *(int *)local_158 = *(int *)local_158 + -1;
            UNLOCK();
            if (*(int *)local_158 != 0) goto LAB_100aa3d3c;
          }
          QArrayData::deallocate(local_158,1,8);
        }
LAB_100aa3d3c:
        if (*(int *)pQVar1 != -1) {
          if (*(int *)pQVar1 != 0) {
            LOCK();
            *(int *)pQVar1 = *(int *)pQVar1 + -1;
            UNLOCK();
            if (*(int *)pQVar1 != 0) goto LAB_100aa3de0;
          }
          QArrayData::deallocate(pQVar1,2,8);
        }
      }
LAB_100aa3de0:
      local_180 = 1;
      bVar9 = false;
      bVar7 = true;
    }
    else {
LAB_100aa3af0:
      QMutex::unlock();
      iVar4 = FUN_100aa3fb0(param_1,param_2,param_3,param_6,param_7);
      iVar6 = iVar6 + iVar3;
      bVar9 = iVar4 == 0;
      bVar7 = false;
      if (!bVar9) {
        local_180 = iVar4;
      }
    }
    if (bVar7) {
      QMutex::unlock();
    }
    iVar4 = local_180;
    if ((!bVar9) || (iVar4 = 0, param_5 <= iVar6)) {
      if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
      }
      return iVar4;
    }
  } while( true );
}

