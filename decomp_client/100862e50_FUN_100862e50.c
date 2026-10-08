
void FUN_100862e50(QObject *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  void *local_28;
  undefined8 local_20;
  long local_18;
  
  lVar2 = *(long *)PTR____stack_chk_guard_1021e1840;
  lVar3 = *(long *)(param_1 + 0x10);
  iVar1 = *(int *)(lVar3 + 8);
  iVar4 = (int)((float)param_2 /
               ((float)*(int *)(param_1 + 0x18) / (float)(*(int *)(lVar3 + 0xc) - iVar1)));
  local_18 = lVar2;
  if (iVar4 != *(int *)(param_1 + 0x1c)) {
    *(int *)(param_1 + 0x1c) = iVar4;
    local_20 = *(undefined8 *)(lVar3 + 0x10 + ((long)iVar1 + (long)iVar4) * 8);
    local_28 = (void *)0x0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_10222d6c0,0,&local_28);
  }
  if (lVar2 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

