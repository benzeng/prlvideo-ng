
void FUN_100252c60(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = param_1[1];
  IVar2 = NSThread::currentThread
                    ((ID)PTR__OBJC_CLASS___NSThread_100bedb40,PTR_s_currentThread_100bed308);
  if (IVar1 != IVar2) {
    FUN_1008e3970("","LocalDevices",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "_bt_thread == [NSThread currentThread]",
                  "../Usb/Virtual/Bluetooth/BTController.mm",0x7e,"PairingReplyPINCode");
  }
  (*(code *)PTR__objc_msgSend_100ba25e8)
            (*param_1,PTR_s_pairingReplyPINCode_pinSize__100bed310,param_2,param_3);
  return;
}

