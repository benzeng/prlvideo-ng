
void FUN_10000ded0(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar2 = (**(code **)(param_1 + 0x38))
                    (*(undefined4 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  QMutex::lock();
  **(undefined1 **)(param_1 + 0x30) = 0;
  puVar1 = PTR__objc_msgSend_100ba25e8;
  uVar3 = (*(code *)PTR__objc_msgSend_100ba25e8)
                    (*(undefined8 *)PTR__NSApp_100ba2068,PTR_s_delegate_100bed268);
  (*(code *)puVar1)(uVar3,PTR_s_performSelectorOnMainThread_with_100bed278,PTR_s_sendStop__100bed270
                    ,0,0);
  QMutex::unlock();
  return;
}

