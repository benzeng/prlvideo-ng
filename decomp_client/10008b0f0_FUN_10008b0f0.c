
void FUN_10008b0f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  QPixmap local_40 [32];
  
  puVar2 = PTR__OBJC_CLASS___NSImage_10226a7c0;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  QPixmap::fromImage(local_40,param_2,0);
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(puVar2,PTR_s_imageWithQPixmap__1022691f8,local_40);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar1,PTR_s_setVmThumbnailImage__10226a0b0,uVar3);
  QPixmap::~QPixmap(local_40);
  return;
}

