
void FUN_10029b2a0(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  FUN_100298ab0(param_1,param_2,0);
  *param_1 = &PTR_FUN_100bb1c40;
  param_1[1] = &PTR_metaObject_100bb1d48;
  param_1[0xd] = &PTR_FUN_100bb1dc0;
  uVar1 = FUN_1007da300("devices.audio.capture.min_latency",0x32);
  *(undefined4 *)((long)param_1 + 0x74) = uVar1;
  uVar1 = FUN_1007da300("devices.audio.capture.max_latency",500);
  *(undefined4 *)(param_1 + 0xf) = uVar1;
  uVar2 = FUN_10070e6f0("A@devices.sound.capture.fifo.load");
  param_1[0x17] = uVar2;
  uVar2 = FUN_10070e6f0("A@devices.sound.capture.fifo.wsize");
  param_1[0x18] = uVar2;
  uVar2 = FUN_10070e6f0("A@devices.sound.capture.guest.format");
  param_1[0x19] = uVar2;
  uVar2 = FUN_10070e6f0("A@devices.sound.capture.guest.rate");
  param_1[0x1a] = uVar2;
  uVar2 = FUN_10070e6f0("A@devices.sound.capture.guest.channels");
  param_1[0x1b] = uVar2;
  uVar2 = FUN_10070e6f0("A@devices.sound.capture.host.format");
  param_1[0x1c] = uVar2;
  uVar2 = FUN_10070e6f0("A@devices.sound.capture.host.rate");
  param_1[0x1d] = uVar2;
  uVar2 = FUN_10070e6f0("A@devices.sound.capture.host.channels");
  param_1[0x1e] = uVar2;
  uVar2 = FUN_10070e6f0("I@devices.sound.capture.fifo.dropped");
  param_1[0x1f] = uVar2;
  uVar2 = FUN_10070e6f0("A@devices.sound.capture.fifo.threshold.underrun");
  param_1[0x10] = uVar2;
  uVar2 = FUN_10070e6f0("A@devices.sound.capture.fifo.threshold.overrun");
  param_1[0x11] = uVar2;
  return;
}

