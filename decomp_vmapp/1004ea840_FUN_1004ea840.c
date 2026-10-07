
void FUN_1004ea840(undefined8 param_1,long param_2,long param_3)

{
  QArrayData *pQVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_38;
  undefined1 local_2a;
  undefined1 local_29;
  
  if (param_2 == 0) {
    uVar3 = ___cxa_allocate_exception(0x10);
    local_38 = QString::fromAscii_helper("invalid pointer",0xf);
    FUN_1004eb830(uVar3,&local_38);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(uVar3,&PTR_vtable_10111cdf0,FUN_1004eb5a0);
  }
  lVar4 = *(long *)(param_3 + 8);
  do {
    if (param_3 == lVar4) {
      return;
    }
    iVar2 = FUN_1004ea150(param_2,(undefined8 *)(lVar4 + 0x10));
    if (iVar2 != 0) {
      pQVar1 = *(QArrayData **)(lVar4 + 0x10);
      iVar2 = *(int *)pQVar1;
      if (1 < iVar2 + 1U) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + 1;
        local_29 = *(int *)pQVar1 != 0;
        UNLOCK();
        iVar2 = *(int *)pQVar1;
      }
      if (iVar2 != -1) {
        if (iVar2 != 0) {
          LOCK();
          *(int *)pQVar1 = *(int *)pQVar1 + -1;
          local_2a = *(int *)pQVar1 != 0;
          UNLOCK();
          if ((bool)local_2a) goto LAB_1004ea860;
        }
        QArrayData::deallocate(pQVar1,2,8);
      }
    }
LAB_1004ea860:
    lVar4 = *(long *)(lVar4 + 8);
  } while( true );
}

