
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10050b9a0(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_48;
  long local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  if (*(long *)(param_1 + 0xc0) == 0) {
    uVar2 = _FSEventsGetCurrentEventId();
  }
  else {
    _FSEventStreamFlushSync();
    _FSEventStreamStop(*(undefined8 *)(param_1 + 0xc0));
    _FSEventStreamInvalidate(*(undefined8 *)(param_1 + 0xc0));
    uVar2 = _FSEventStreamGetLatestEventId(*(undefined8 *)(param_1 + 0xc0));
    _FSEventStreamRelease(*(undefined8 *)(param_1 + 0xc0));
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  if (param_2 != 0) {
    local_48 = 0;
    local_28 = 0;
    local_30 = 0;
    local_38 = 0;
    local_40 = param_1;
    uVar2 = _FSEventStreamCreate
                      (_DAT_100b461b8,*(undefined8 *)PTR__kCFAllocatorDefault_100ba23b0,
                       FUN_10050bad0,&local_48,param_2,uVar2,0x10);
    *(undefined8 *)(param_1 + 0xc0) = uVar2;
    uVar2 = _CFRunLoopGetCurrent();
    _FSEventStreamScheduleWithRunLoop
              (*(undefined8 *)(param_1 + 0xc0),uVar2,
               *(undefined8 *)PTR__kCFRunLoopCommonModes_100ba23e0);
    cVar1 = _FSEventStreamStart(*(undefined8 *)(param_1 + 0xc0));
    if (cVar1 == '\0') {
      _FSEventStreamInvalidate(*(undefined8 *)(param_1 + 0xc0));
      _FSEventStreamRelease(*(undefined8 *)(param_1 + 0xc0));
      *(undefined8 *)(param_1 + 0xc0) = 0;
    }
  }
  return;
}

