
int FUN_1004efc00(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  QArrayData *pQVar2;
  int iVar3;
  QArrayData *local_448;
  undefined1 local_439;
  char local_438 [1032];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_30 = lVar1;
  iVar3 = _FSRefMakePath(param_1,local_438,0x400);
  if (iVar3 == 0) {
    _strlen(local_438);
    QString::fromUtf8_helper((char *)&local_448,(int)local_438);
    pQVar2 = (QArrayData *)*param_2;
    *param_2 = local_448;
    local_448 = pQVar2;
    if (*(int *)pQVar2 != -1) {
      if (*(int *)pQVar2 != 0) {
        LOCK();
        *(int *)pQVar2 = *(int *)pQVar2 + -1;
        local_439 = *(int *)pQVar2 != 0;
        UNLOCK();
        if ((bool)local_439) goto LAB_1004efca4;
      }
      QArrayData::deallocate(pQVar2,2,8);
    }
  }
LAB_1004efca4:
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

