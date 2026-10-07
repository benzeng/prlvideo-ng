
void FUN_1000d3360(QObject *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auVar3 [16];
  QArrayData *local_38;
  undefined1 local_29;
  
  QObject::QObject(param_1,(QObject *)0x0);
  FUN_1000d3670((CBaseNode *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0xa4) = 0;
  puVar2 = PTR_vtable_100ba22e8;
  *(undefined **)param_1 = PTR_vtable_100ba22e8 + 0x10;
  *(undefined **)(param_1 + 0x10) = puVar2 + 0xe0;
  puVar1 = PTR_shared_null_100ba2188;
  auVar3._8_4_ = (int)PTR_shared_null_100ba2188;
  auVar3._0_8_ = PTR_shared_null_100ba2188;
  auVar3._12_4_ = (int)((ulong)PTR_shared_null_100ba2188 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0xa8) = auVar3;
  *(undefined1 (*) [16])(param_1 + 0xb8) = auVar3;
  *(undefined1 (*) [16])(param_1 + 200) = auVar3;
  *(undefined **)(param_1 + 0xd8) = puVar1;
  *(undefined **)(param_1 + 0xe0) = PTR_shared_null_100ba20d0;
  (**(code **)(puVar2 + 0xb8))(param_1);
  local_38 = (QArrayData *)*param_2;
  if (1 < *(int *)local_38 + 1U) {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + 1;
    local_29 = *(int *)local_38 != 0;
    UNLOCK();
  }
  CBaseNode::fromString
            ((CBaseNode *)(param_1 + 0x10),(QTypedArrayData<unsigned_short> *)&local_38,false,
             (QString *)0x0,(int *)0x0,(int *)0x0);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return;
}

