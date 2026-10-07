
void FUN_10029add0(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  FUN_100298ab0(param_1,param_2,1);
  *param_1 = &PTR_FUN_100bb1a80;
  param_1[1] = &PTR_metaObject_100bb1b80;
  param_1[0xd] = &PTR_FUN_100bb1bf8;
  uVar1 = FUN_1007da300("devices.audio.playback.min_latency",0x32);
  *(undefined4 *)((long)param_1 + 0x74) = uVar1;
  uVar1 = FUN_1007da300("devices.audio.playback.max_latency",0x96);
  *(undefined4 *)(param_1 + 0xf) = uVar1;
  uVar2 = FUN_10070e6f0("A@devices.sound.playback.fifo.load");
  param_1[0x17] = uVar2;
  uVar2 = FUN_10070e6f0("A@devices.sound.playback.fifo.rsize");
  param_1[0x18] = uVar2;
  uVar2 = FUN_10070e6f0("A@devices.sound.playback.guest.format");
  param_1[0x19] = uVar2;
  uVar2 = FUN_10070e6f0("A@devices.sound.playback.guest.rate");
  param_1[0x1a] = uVar2;
  uVar2 = FUN_10070e6f0("A@devices.sound.playback.guest.channels");
  param_1[0x1b] = uVar2;
  uVar2 = FUN_10070e6f0("A@devices.sound.playback.host.format");
  param_1[0x1c] = uVar2;
  uVar2 = FUN_10070e6f0("A@devices.sound.playback.host.rate");
  param_1[0x1d] = uVar2;
  uVar2 = FUN_10070e6f0("A@devices.sound.playback.host.channels");
  param_1[0x1e] = uVar2;
  uVar2 = FUN_10070e6f0("I@devices.sound.playback.fifo.silence");
  param_1[0x1f] = uVar2;
  uVar2 = FUN_10070e6f0("A@devices.sound.playback.fifo.threshold.underrun");
  param_1[0x10] = uVar2;
  uVar2 = FUN_10070e6f0("A@devices.sound.playback.fifo.threshold.overrun");
  param_1[0x11] = uVar2;
  return;
}

