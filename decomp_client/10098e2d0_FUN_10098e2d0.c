
void FUN_10098e2d0(QObject *param_1,QObject *param_2)

{
  undefined *puVar1;
  QObject *this;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  QObject *local_58;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  QObject *local_30;
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_102236280;
  this = operator_new(0x28);
  QObject::QObject(this,param_1);
  *(undefined **)this = &DAT_10227dd20;
  *(QObject **)(this + 0x10) = param_1;
  *(QObject **)(param_1 + 0x10) = this;
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSWorkspace_10226a8c8,PTR_s_sharedWorkspace_1022697b8);
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar2,PTR_s_notificationCenter_1022699f0);
  puVar1 = PTR___NSConcreteStackBlock_1021e1280;
  local_50 = PTR___NSConcreteStackBlock_1021e1280;
  local_48 = 0xc0000000;
  local_44 = 0;
  local_40 = FUN_10098e440;
  local_38 = &DAT_102233560;
  local_30 = param_1;
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (uVar3,PTR_s_addObserverForName_object_queue__1022692e0,
                     *(undefined8 *)PTR__NSWorkspaceDidMountNotification_1021e1198,uVar2,0,&local_50
                    );
  *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18) = uVar4;
  local_78 = puVar1;
  local_70 = 0xc0000000;
  local_6c = 0;
  local_68 = FUN_10098e530;
  local_60 = &DAT_102233580;
  local_58 = param_1;
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (uVar3,PTR_s_addObserverForName_object_queue__1022692e0,
                     *(undefined8 *)PTR__NSWorkspaceDidUnmountNotification_1021e11a8,uVar2,0,
                     &local_78);
  *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x20) = uVar2;
  return;
}

