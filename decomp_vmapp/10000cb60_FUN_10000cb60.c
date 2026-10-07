
void FUN_10000cb60(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ID IVar3;
  ID self;
  
  puVar2 = PTR__objc_msgSend_100ba25e8;
  if ((param_1 != 0) && (param_2 != 0)) {
    IVar3 = NSData::dataWithBytes_length_
                      ((ID)PTR__OBJC_CLASS___NSData_100bedb08,PTR_s_dataWithBytes_length__100bed220,
                       param_1,(long)param_2);
    uVar1 = *(undefined8 *)PTR__NSApp_100ba2068;
    self = NSImage::alloc((ID)PTR__OBJC_CLASS___NSImage_100bedb10,PTR_s_alloc_100bed228);
    IVar3 = NSImage::initWithData_(self,PTR_s_initWithData__100bed230,IVar3);
    IVar3 = NSImage::autorelease(IVar3,PTR_s_autorelease_100bed238);
    (*(code *)puVar2)(uVar1,PTR_s_setApplicationIconImage__100bed240,IVar3);
    return;
  }
  (*(code *)PTR__objc_msgSend_100ba25e8)
            (*(undefined8 *)PTR__NSApp_100ba2068,PTR_s_setApplicationIconImage__100bed240,0);
  return;
}

