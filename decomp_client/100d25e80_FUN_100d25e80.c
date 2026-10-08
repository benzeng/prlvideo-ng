
undefined8 * FUN_100d25e80(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined4 local_34;
  QArrayData *local_30;
  undefined1 local_23;
  undefined1 local_22;
  
  cVar1 = QDomNode::isNull();
  puVar3 = (undefined8 *)0x0;
  if (cVar1 == '\0') {
    local_30 = (QArrayData *)PTR_shared_null_1021e1288;
    cVar1 = FUN_100d25fb0(param_1,param_2,1,&local_30,&local_34);
    puVar3 = (undefined8 *)0x0;
    if (cVar1 != '\0') {
      puVar3 = operator_new(0x20);
      uVar2 = FUN_100d26520(param_1);
      *puVar3 = 0xffffffff00000001;
      *(undefined4 *)(puVar3 + 1) = 0xffffffff;
      puVar3[2] = local_30;
      if (1 < *(int *)local_30 + 1U) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + 1;
        local_23 = *(int *)local_30 != 0;
        UNLOCK();
      }
      *(undefined4 *)(puVar3 + 3) = local_34;
      *(undefined1 *)((long)puVar3 + 0x1c) = uVar2;
    }
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        UNLOCK();
        if (*(int *)local_30 != 0) {
          return puVar3;
        }
        local_22 = 0;
      }
      QArrayData::deallocate(local_30,2,8);
    }
  }
  return puVar3;
}

