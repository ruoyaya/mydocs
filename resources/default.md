## WebEngine Markdown Editor Example

This example uses [QWebEngineView](http://doc.qt.io/qt-5/qwebengineview.html)
to preview text written using the [Markdown](https://en.wikipedia.org/wiki/Markdown)
syntax.

### Acknowledgments

The conversion from Markdown to HTML is done with the help of the
[marked JavaScript library](https://github.com/chjj/marked) by _Christopher Jeffrey_.
The [style sheet](https://kevinburke.bitbucket.io/markdowncss/)
was created by _Kevin Burke_.


```sequence
对象A->对象B: 对象B你好吗?（请求）
Note right of 对象B: 对象B的描述
Note left of 对象A: 对象A的描述(提示)
对象B-->对象A: 我很好(响应)
对象A->对象B: 你真的好吗？
```

## WebEngine Markdown Editor Example

This example uses [QWebEngineView](http://doc.qt.io/qt-5/qwebengineview.html)
to preview text written using the [Markdown](https://en.wikipedia.org/wiki/Markdown)
syntax.

### Acknowledgments

The conversion from Markdown to HTML is done with the help of the
[marked JavaScript library](https://github.com/chjj/marked) by _Christopher Jeffrey_.
The [style sheet](https://kevinburke.bitbucket.io/markdowncss/)
was created by _Kevin Burke_.


```sequence
对象A->对象B: 对象B你好吗?（请求）
Note right of 对象B: 对象B的描述
Note left of 对象A: 对象A的描述(提示)
对象B-->对象A: 我很好(响应)
对象A->对象B: 你真的好吗？
```

```html
<html>
  <body style="1111">1111</body>
</html>
```


```java
package com.thunis.ba.bs.inf.bigorder.acer;

import com.thunis.ba.model.bigorder.acer.*;
import com.thunis.ba.model.bigorder.common.BigOrderReceiveHanaVo;
import com.thunis.ba.model.bigorder.contract.apply.ContractApplyMainVO;

import java.util.List;
import java.util.Map;

/**
 * @author WuJing
 * @since 2018-08-30
 */
public interface AcerOrderService {
    Map queryOrderByPage(Map conditions);

    AcerOrderVo queryByOrderId(String order_id);
}
```

AcerOrderVo
