# frozen_string_literal: true

module Nokogiri
  module XML
    class Notation < Struct.new(:name, :public_id, :system_id)
    end
  end
end
