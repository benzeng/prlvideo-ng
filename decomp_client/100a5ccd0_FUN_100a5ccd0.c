
undefined8 * FUN_100a5ccd0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  char cVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_shared_null_1021e1288;
  plVar3 = (long *)FUN_100a5d650(param_2);
  if (*plVar3 != 0) {
    puVar4 = (undefined8 *)FUN_100a5d650(param_2,param_3);
    cVar2 = FUN_100a5a520(*puVar4);
    if (cVar2 != '\0') {
      *param_1 = puVar1;
      if (1 < *(int *)puVar1 + 1U) {
        LOCK();
        *(int *)puVar1 = *(int *)puVar1 + 1;
        UNLOCK();
      }
      goto LAB_100a5cd48;
    }
  }
  uVar5 = QString::fromAscii_helper("",0);
  *param_1 = uVar5;
LAB_100a5cd48:
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (*(int *)puVar1 != 0) {
        return param_1;
      }
    }
    QArrayData::deallocate((QArrayData *)puVar1,2,8);
  }
  return param_1;
}

