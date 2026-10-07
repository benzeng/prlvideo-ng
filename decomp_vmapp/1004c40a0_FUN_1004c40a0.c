
undefined1 FUN_1004c40a0(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 uVar6;
  
  uVar3 = (*(code *)PTR__objc_msgSend_100ba25e8)
                    (PTR__OBJC_CLASS___NSAutoreleasePool_100bedb20,PTR_s_alloc_100bed228);
  uVar3 = (*(code *)PTR__objc_msgSend_100ba25e8)(uVar3,PTR_s_init_100bed248);
  uVar4 = (*(code *)PTR__objc_msgSend_100ba25e8)
                    (PTR__OBJC_CLASS___NSFileManager_100bedc68,PTR_s_defaultManager_100bedaa0);
  lVar5 = (*(code *)PTR__objc_msgSend_100ba25e8)
                    (uVar4,PTR_s_URLForDirectory_inDomain_appropr_100bed828,5,1,0,0,0);
  if (lVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar4 = (*(code *)PTR__objc_msgSend_100ba25e8)
                      (PTR__OBJC_CLASS___NSString_100bedb00,PTR_s_stringWithFormat__100bed9f0,
                       &cf_Containers____Data_Library_Preferences____plist,
                       &cf_com_apple_CloudPhotosConfiguration,&cf_com_apple_CloudPhotosConfiguration
                      );
    lVar5 = (*(code *)PTR__objc_msgSend_100ba25e8)
                      (PTR__OBJC_CLASS___NSURL_100bedbf0,
                       PTR_s_URLWithString_relativeToURL__100bed830,uVar4,lVar5);
    if (lVar5 == 0) {
      uVar6 = 0;
    }
    else {
      lVar5 = (*(code *)PTR__objc_msgSend_100ba25e8)
                        (PTR__OBJC_CLASS___NSDictionary_100bedb98,
                         PTR_s_dictionaryWithContentsOfURL__100bed838,lVar5);
      if (lVar5 == 0) {
        uVar6 = 0;
      }
      else {
        lVar5 = (*(code *)PTR__objc_msgSend_100ba25e8)
                          (lVar5,PTR_s_objectForKey__100bed900,&cf_com_apple_photo_icloud_cloudphoto
                          );
        if (lVar5 == 0) {
          uVar6 = 0;
        }
        else {
          uVar4 = (*(code *)PTR__objc_msgSend_100ba25e8)
                            (PTR__OBJC_CLASS___NSNumber_100bedba0,PTR_s_class_100bed938);
          cVar1 = (*(code *)PTR__objc_msgSend_100ba25e8)(lVar5,PTR_s_isKindOfClass__100bed940,uVar4)
          ;
          if (cVar1 == '\0') {
            uVar6 = 0;
          }
          else {
            iVar2 = (*(code *)PTR__objc_msgSend_100ba25e8)(lVar5,PTR_s_intValue_100bed7d8);
            *(bool *)param_1 = iVar2 != 0;
            uVar6 = 1;
          }
        }
      }
    }
  }
  (*(code *)PTR__objc_msgSend_100ba25e8)(uVar3,PTR_s_drain_100bed2a8);
  return uVar6;
}

