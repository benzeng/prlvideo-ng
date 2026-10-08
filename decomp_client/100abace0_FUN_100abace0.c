
bool FUN_100abace0(long param_1,int *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID self;
  bool bVar4;
  double local_48 [2];
  double local_38;
  double local_30;
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  if (**(long **)(param_1 + 8) == 0) {
    bVar4 = false;
  }
  else {
    uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR__OBJC_CLASS___NSAutoreleasePool_10226a970,PTR_s_alloc_102268b58);
    uVar2 = (*(code *)puVar1)(uVar2,PTR_s_init_102268ca8);
    uVar3 = (*(code *)puVar1)(**(undefined8 **)(param_1 + 8),PTR_s_view_102269138);
    self = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_window_102268c08);
    bVar4 = self != 0;
    if (bVar4) {
      _objc_msgSend_stret((undefined *)local_48,self,PTR_s_frame_102268b50);
      *param_2 = (int)local_48[0];
      param_2[1] = 0;
      param_2[2] = (int)local_38;
      param_2[3] = (int)local_30;
    }
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar2,PTR_s_release_1022699b8);
  }
  return bVar4;
}

