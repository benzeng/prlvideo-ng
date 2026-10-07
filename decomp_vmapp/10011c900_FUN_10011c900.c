
void FUN_10011c900(undefined8 *param_1,undefined1 param_2,undefined4 param_3)

{
  CVmEvent *this;
  undefined8 *puVar1;
  QArrayData *pQVar2;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  *param_1 = &PTR_FUN_10110d410;
  this = operator_new(0x100);
  CVmEvent::CVmEvent(this);
  puVar1 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (puVar1 == (undefined8 *)0x0) {
    (**(code **)(*(long *)this + 8))(this);
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 1;
    puVar1[2] = this;
    *puVar1 = &PTR_FUN_10110ce08;
  }
  param_1[1] = puVar1;
  pQVar2 = (QArrayData *)QString::fromAscii_helper("proto_force_questions_sign",0x1a);
  local_38 = pQVar2;
  FUN_10011cae0(param_1,param_2,&local_38);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_29 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10011c9c6;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_10011c9c6:
  pQVar2 = (QArrayData *)QString::fromAscii_helper("proto_command_flags",0x13);
  local_40 = pQVar2;
  FUN_10011cae0(param_1,param_3,&local_40);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_29 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_29) {
        return;
      }
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
  return;
}

