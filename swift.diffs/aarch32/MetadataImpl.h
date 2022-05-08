diff --git a/stdlib/public/runtime/MetadataImpl.h b/stdlib/public/runtime/MetadataImpl.h
index ac455a8cc99..5357559dc1f 100644
--- a/stdlib/public/runtime/MetadataImpl.h
+++ b/stdlib/public/runtime/MetadataImpl.h
@@ -99,11 +99,11 @@ struct NativeBox {
   }
   
   static T *initializeWithCopy(T *dest, T *src) {
-    return new (dest) T(*src);
+	  return ::new (dest) T(*src);
   }
 
   static T *initializeWithTake(T *dest, T *src) {
-    T *result = new (dest) T(std::move(*src));
+    T *result = ::new (dest) T(std::move(*src));
     src->T::~T();
     return result;
   }
