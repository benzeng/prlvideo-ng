
void FUN_1000bef10(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  pid_t pVar4;
  long lVar5;
  undefined8 *puVar6;
  
  uVar2 = DAT_1011b6928;
  lVar5 = _CFBundleGetBundleWithIdentifier(&cf_com_apple_LaunchServices);
  if (lVar5 != 0) {
    puVar6 = (undefined8 *)_CFBundleGetDataPointerForName(lVar5,&cf__kLSDisplayNameKey);
    pcVar3 = DAT_1011ccf28;
    if (puVar6 != (undefined8 *)0x0) {
      uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_100ba23b0;
      pVar4 = _getpid();
      lVar5 = (*pcVar3)(uVar1,pVar4);
      if (lVar5 != 0) {
        (*DAT_1011ccf38)(0xfffffffffffffffe,lVar5,*puVar6,uVar2,0);
        _CFRelease(lVar5);
        return;
      }
      if (0 < DAT_1011b55f8) {
        pVar4 = _getpid();
        FUN_1008e3970("","vm",1,"Failed to create ASN with pid %d",pVar4);
        return;
      }
    }
  }
  return;
}

