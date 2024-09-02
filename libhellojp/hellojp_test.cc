#include <gtest/gtest.h>
#include <gtest/internal/gtest-port.h>

#include "hellojp.h"

TEST(TestCase, test1) {
    HelloJp hj;

    // 標準出力キャプチャ
    testing::internal::CaptureStdout();

    // メッセージ出力
    hj.hello();

    // 標準出力キャプチャ終了とテスト
    ASSERT_STREQ("こんにちは\n", testing::internal::GetCapturedStdout().c_str());
}
