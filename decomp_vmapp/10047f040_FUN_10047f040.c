
undefined8 FUN_10047f040(undefined8 param_1,QString *param_2,long *param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined1 auVar5 [16];
  long *local_38;
  
  if (*(int *)(param_2->field0_0x0 + 4) == 0) {
    pcVar4 = "VM exec: Can\'t send to empty handle!\n";
  }
  else {
    if (*(char *)(param_4 + 0x21) == '\0') {
      puVar3 = operator_new(0x18);
      auVar5._8_4_ = (int)PTR_shared_null_100ba20d0;
      auVar5._0_8_ = PTR_shared_null_100ba20d0;
      auVar5._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
      *(undefined1 (*) [16])(puVar3 + 1) = auVar5;
      *puVar3 = param_1;
      QString::operator=((QString *)(puVar3 + 1),(QString *)(param_4 + 0x10));
      QString::operator=((QString *)(puVar3 + 2),param_2);
      lVar2 = *(long *)(*param_3 + 0x10);
      *(undefined8 **)(lVar2 + 0x78) = puVar3;
      *(code **)(lVar2 + 0x70) = FUN_10047f230;
      if (*(char *)(param_4 + 0x22) == '\0') {
        *(undefined1 *)(param_4 + 0x22) = 1;
        QMutex::unlock();
        local_38 = (long *)*param_3;
        if (local_38 != (long *)0x0) {
          LOCK();
          *(int *)(local_38 + 1) = (int)local_38[1] + 1;
          UNLOCK();
        }
        FUN_10047e9d0(param_1,param_2,&local_38,(QString *)(puVar3 + 1));
        if (local_38 != (long *)0x0) {
          LOCK();
          plVar1 = local_38 + 1;
          lVar2 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
            (**(code **)(*local_38 + 0x10))();
          }
        }
        QMutex::lock();
      }
      else {
        if ((*(char *)(param_4 + 0x21) != '\0') ||
           (199 < *(int *)(*(long *)(param_4 + 0x30) + 0xc) -
                  *(int *)(*(long *)(param_4 + 0x30) + 8))) {
          if (DAT_1011b55f8 < 2) {
            return 0xf000001c;
          }
          FUN_1008e3970("TCHOST","ToolsCenterHost",2,"VM exec: send queue is full!");
          return 0xf000001c;
        }
        FUN_100069370(param_4 + 0x30,param_3);
      }
      return 0;
    }
    pcVar4 = "VM exec: Can\'t send due to fatal error!\n";
  }
  FUN_1008e3970("TCHOST","ToolsCenterHost",0,pcVar4);
  return 0xf000001c;
}

