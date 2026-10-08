
void FUN_100385430(undefined8 param_1,undefined8 param_2,QObject *param_3)

{
  long lVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined8 local_60;
  undefined8 local_58;
  QObject *local_50;
  void *local_48;
  QObject **local_40;
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  pcVar2 = *(code **)(*(long *)(param_3 + 0x10) + 0x28);
  local_30 = lVar1;
  local_60 = QGraphicsSceneMouseEvent::pos();
  local_58 = param_2;
  cVar3 = (*pcVar2)(param_3 + 0x10,&local_60);
  if (cVar3 == '\0') {
    iVar4 = 2;
  }
  else {
    iVar4 = 3;
  }
  local_40 = &local_50;
  local_48 = (void *)0x0;
  local_50 = param_3;
  QMetaObject::activate(param_3,(QMetaObject *)&DAT_1021f15f0,iVar4,&local_48);
  if (lVar1 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

