
void FUN_100659000(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 local_1c;
  
  uVar1 = _IOServiceMatching("AppleSmartBattery");
  iVar2 = _IOServiceGetMatchingServices
                    (*(undefined4 *)PTR__kIOMasterPortDefault_100ba2470,uVar1,&local_1c);
  if (iVar2 == 0) {
    iVar2 = _IOIteratorNext(local_1c);
    if (iVar2 != 0) {
      _IOObjectRelease(iVar2);
    }
    _IOObjectRelease(local_1c);
  }
  CHostHardwareInfoBase::setHostNotebookFlag(SUB81(*(undefined8 *)(param_1 + 0x18),0));
  return;
}

