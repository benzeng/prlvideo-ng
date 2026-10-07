
undefined8 FUN_0040ce20(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 local_1d8 [80];
  undefined1 local_188 [80];
  undefined1 local_138 [80];
  undefined1 local_e8 [80];
  undefined1 local_98 [8];
  undefined8 local_90;
  char *local_70;
  char *local_68;
  char *local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c [3];
  
  iVar2 = FUN_0040d180();
  puVar1 = PTR_dbus_syms_0061bd90;
  uVar4 = 1;
  if (iVar2 == 0) {
    (**(code **)PTR_dbus_syms_0061bd90)(local_98);
    lVar3 = (**(code **)(puVar1 + 8))(0,local_98);
    if (lVar3 == 0) {
      FUN_0040fffa(&DAT_0041913e,"prlcc",0,"Error: Connection to D-BUS daemon failed: %s",local_90);
      (**(code **)(puVar1 + 0x10))(local_98);
      uVar4 = 1;
    }
    else {
      local_58 = "prlcc";
      local_60 = "parallels-tools";
      local_3c[0] = 0;
      local_40 = 3600000;
      local_44 = 2;
      local_68 = "Parallels Tools";
      local_70 = "urgency";
      local_50 = param_1;
      uVar4 = (**(code **)(puVar1 + 0x18))
                        ("org.freedesktop.Notifications","/org/freedesktop/Notifications",
                         "org.freedesktop.Notifications","Notify");
      (**(code **)(puVar1 + 0x20))(uVar4,local_e8);
      (**(code **)(puVar1 + 0x28))(local_e8,0x73,&local_58);
      (**(code **)(puVar1 + 0x28))(local_e8,0x75,local_3c);
      (**(code **)(puVar1 + 0x28))(local_e8,0x73,&local_60);
      (**(code **)(puVar1 + 0x28))(local_e8,0x73,&local_68);
      (**(code **)(puVar1 + 0x28))(local_e8,0x73,&local_50);
      (**(code **)(puVar1 + 0x30))(local_e8,0x61,"s",local_138);
      (**(code **)(puVar1 + 0x38))(local_e8,local_138);
      (**(code **)(puVar1 + 0x30))(local_e8,0x61,&DAT_00418c95,local_138);
      (**(code **)(puVar1 + 0x30))(local_138,0x65,0,local_188);
      (**(code **)(puVar1 + 0x28))(local_188,0x73,&local_70);
      (**(code **)(puVar1 + 0x30))(local_188,0x76,"y",local_1d8);
      (**(code **)(puVar1 + 0x28))(local_1d8,0x79,&local_44);
      (**(code **)(puVar1 + 0x38))(local_188,local_1d8);
      (**(code **)(puVar1 + 0x38))(local_138,local_188);
      (**(code **)(puVar1 + 0x38))(local_e8,local_138);
      (**(code **)(puVar1 + 0x28))(local_e8,0x69,&local_40);
      (**(code **)(puVar1 + 0x40))(uVar4,1);
      iVar2 = (**(code **)(puVar1 + 0x50))(lVar3,uVar4,0);
      if (iVar2 == 0) {
        FUN_0040fffa(&DAT_0041913e,"prlcc",0,"Error: Failed to send dbus message");
      }
      else {
        (**(code **)(puVar1 + 0x58))(lVar3);
        (**(code **)(puVar1 + 0x48))(uVar4);
      }
      FUN_0040d110();
      uVar4 = 0;
    }
  }
  return uVar4;
}

