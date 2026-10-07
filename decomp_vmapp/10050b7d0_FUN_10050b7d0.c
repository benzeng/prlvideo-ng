
void FUN_10050b7d0(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  byte *pbVar6;
  byte *pbVar7;
  bool bVar8;
  
  std::mutex::lock();
  if (*(char *)(param_1 + 0xb8) == '\0') {
    std::mutex::unlock();
    return;
  }
  *(undefined1 *)(param_1 + 0xb8) = 0;
  lVar3 = 0;
  if (*(long *)(param_1 + 0x90) != 0) {
    uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_100ba23b0;
    lVar3 = _CFArrayCreateMutable
                      (uVar1,*(long *)(param_1 + 0x90),PTR__kCFTypeArrayCallBacks_100ba23f0);
    plVar5 = *(long **)(param_1 + 0x80);
    while (plVar5 != (long *)(param_1 + 0x88)) {
      pbVar7 = (byte *)plVar5[4];
      if (*(long *)(pbVar7 + 0x38) == 0) {
        if ((*pbVar7 & 1) == 0) {
          pbVar6 = pbVar7 + 1;
        }
        else {
          pbVar6 = *(byte **)(pbVar7 + 0x10);
        }
        uVar4 = _CFStringCreateWithCString(uVar1,pbVar6,0x8000100);
        if (*(long *)(pbVar7 + 0x38) != 0) {
          _CFRelease();
        }
        *(undefined8 *)(pbVar7 + 0x38) = uVar4;
        pbVar7 = (byte *)plVar5[4];
      }
      _CFArrayAppendValue(lVar3,*(undefined8 *)(pbVar7 + 0x38));
      plVar2 = (long *)plVar5[1];
      if ((long *)plVar5[1] == (long *)0x0) {
        do {
          plVar2 = (long *)plVar5[2];
          bVar8 = (long *)*plVar2 != plVar5;
          plVar5 = plVar2;
        } while (bVar8);
      }
      else {
        do {
          plVar5 = plVar2;
          plVar2 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
    }
  }
  std::mutex::unlock();
  FUN_10050b9a0(param_1,lVar3);
  if (lVar3 != 0) {
    _CFRelease(lVar3);
  }
  return;
}

