
undefined8 FUN_10026e6e0(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 local_68 [68];
  uint local_24;
  
  FUN_1001cda40(local_68,DAT_102310918);
  FUN_1001091d0();
  uVar2 = 0;
  iVar1 = SdkUtils::initSdk(false,SUB41((local_24 & 0x10) >> 4,0),0);
  if (iVar1 < 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error while initializing SDK. Return code: [%.8X]",iVar1
                 );
    uVar2 = 0x80015353;
  }
  return uVar2;
}

